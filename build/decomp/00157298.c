// OoT3D decomp @ 00157298  name=FUN_00157298  size=248

void FUN_00157298(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  iVar2 = *(int *)(param_1 + 0x1a8);
  iVar3 = *(int *)(param_1 + 0x1ac);
  if (*(short *)(param_1 + 0x1be) != 0) {
    return;
  }
  if (*(short *)(param_1 + 0x1bc) == 0) {
    sVar1 = *(short *)(param_1 + 0x1ba);
    uVar4 = *(undefined4 *)(iVar3 + 0x28);
    uVar5 = *(undefined4 *)(iVar3 + 0x2c);
    uVar6 = *(undefined4 *)(iVar3 + 0x30);
  }
  else {
    if (*(short *)(param_1 + 0x1bc) != 1) goto LAB_00157378;
    uVar4 = *(undefined4 *)(iVar2 + 0x28);
    uVar5 = *(undefined4 *)(iVar2 + 0x2c);
    uVar6 = *(undefined4 *)(iVar2 + 0x30);
    sVar1 = *(short *)(param_1 + 0x1b8);
  }
  if (sVar1 == 0x71) {
    z_actor_003738d0(uVar4,uVar5,uVar6,param_2 + 0x208c,param_2,0x168,0,0,0,0xf,1);
    FUN_00375c10(param_2,0x32);
  }
  else {
    z_actor_003738d0(uVar4,uVar5,uVar6,param_2 + 0x208c,param_2,0x168,0,0,0,
                     (int)(short)(sVar1 + -0x68),1);
  }
LAB_00157378:
  FUN_00374428(param_1);
  return;
}
