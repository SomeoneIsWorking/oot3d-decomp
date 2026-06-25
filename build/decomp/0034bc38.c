// OoT3D decomp @ 0034bc38  name=FUN_0034bc38  size=244

void FUN_0034bc38(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  
  FUN_0036055c(param_3,param_2,DAT_0034bd2c,1);
  uVar3 = DAT_0034bd38;
  uVar2 = DAT_0034bd34;
  iVar1 = DAT_0034bd30;
  if (*(int *)(param_2 + 0x284) == DAT_0034bd30) {
    uVar4 = FUN_003603c0(param_2 + 0x254,DAT_0034bd30);
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00360190(uVar2,uVar4,uVar3,uVar3,param_2 + 0x254,param_3,iVar1,2);
    FUN_003603f8(param_3,param_2,4);
    *(undefined2 *)(param_2 + 0x2220) = *(undefined2 *)(param_2 + 0xbe);
    return;
  }
  if (*(int *)(param_2 + 0x284) == 0x88) {
    param_1 = DAT_0034bd38;
  }
  uVar4 = FUN_0034d628(param_2);
  uVar5 = FUN_003603c0(param_2 + 0x254,uVar4);
  uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00360190(uVar2,uVar3,uVar5,param_1,param_2 + 0x254,param_3,uVar4,2);
  *(undefined2 *)(param_2 + 0x2220) = *(undefined2 *)(param_2 + 0xbe);
  return;
}

