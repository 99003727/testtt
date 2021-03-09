  if (HAL_GPIO_ReadPin(GPIOB, GPIO_PIN_3)==GPIO_PIN_RESET)
	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,GPIO_PIN_SET );
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13,GPIO_PIN_SET );
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14,GPIO_PIN_SET );
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,GPIO_PIN_SET );
	  }
	  else
	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,GPIO_PIN_RESET );
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_13,GPIO_PIN_RESET );
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_14,GPIO_PIN_RESET );
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_15,GPIO_PIN_RESET );
	  }
	  if (HAL_GPIO_ReadPin(GPIOD, GPIO_PIN_1) == 0)
	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,GPIO_PIN_SET );
	  }
	  else
	  {
		  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_12,GPIO_PIN_RESET );
	  }


The open On-chip Debugger (open OCD) provides debugging, in system programming and boundary scan testing for embedded target devices. 
	Programming adapters are used to get access to the debug interface of the target with native protocol signaling such as SWD.
	STM32F4-DISC1 board has embedded in-circuit programmer and debugger which supports only SWD debug protocol.
