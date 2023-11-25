

#include "CPP_ExampleEnemy.h"

ACPP_ExampleEnemy::ACPP_ExampleEnemy()
{
	PrimaryActorTick.bCanEverTick = true;

	//Added health component on the this actor.
	HealthComponent = CreateDefaultSubobject<UHealth>(TEXT("Health Component"));
	SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent >(TEXT("Skeletal Mesh"));
	CapsuleComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Component to Collider"));

	RootComponent = SkeletalMeshComponent;
}

void ACPP_ExampleEnemy::BeginPlay()
{
	Super::BeginPlay();

	CapsuleComponent->OnComponentHit.AddDynamic(this, &ACPP_ExampleEnemy::ColliderTrigger);

}

void ACPP_ExampleEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ACPP_ExampleEnemy::DealDamage(float damage)
{
	HealthComponent->DowngradesHealth(damage);
}

void ACPP_ExampleEnemy::DestroyThisActor()
{
	ACPP_ExampleEnemy::Destroy();
}

void ACPP_ExampleEnemy::ColliderTrigger(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Triggered!"), false, FVector2D::UnitVector);

}
