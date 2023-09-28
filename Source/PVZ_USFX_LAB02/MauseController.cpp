// Fill out your copyright notice in the Description page of Project Settings.


#include "MauseController.h"

AMauseController::AMauseController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
