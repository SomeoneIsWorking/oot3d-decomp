// OoT3D decomp @ 0036bcc8  name=FUN_0036bcc8  size=344

undefined4
FUN_0036bcc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;

  iVar6 = *(int *)(param_4 + 0x20ac);
  *(undefined4 *)(param_5 + 0x44) = param_3;
  *(undefined4 *)(param_5 + 0x40) = param_2;
  *(undefined4 *)(param_5 + 0x3c) = param_1;
  iVar5 = FUN_0037571c(param_4);
  uVar3 = DAT_0036be28;
  piVar2 = DAT_0036be24;
  piVar1 = DAT_0036be20;
  if ((iVar5 == 0 && *DAT_0036be20 == 0) || (*DAT_0036be24 != 0xee)) {
    sVar4 = *(short *)(param_5 + 0x92) - *(short *)(param_5 + 0xbe);
    if (sVar4 < 0) {
      sVar4 = -sVar4;
    }
    if (param_8 <= sVar4) {
      FUN_00375a18(param_6 + 2,0,6,DAT_0036be28,100);
      FUN_00375a18(param_6,0,6,uVar3,100);
      FUN_00375a18(param_7 + 2,0,6,uVar3,100);
      FUN_00375a18(param_7,0,6,uVar3,100);
      return 0;
    }
  }
  iVar5 = FUN_0037571c(param_4);
  if ((*piVar1 == 0 && iVar5 == 0) || (*piVar2 != 0xee)) {
    local_30 = *(undefined4 *)(iVar6 + 0x3c);
    uStack_2c = *(undefined4 *)(iVar6 + 0x40);
    uStack_28 = *(undefined4 *)(iVar6 + 0x44);
  }
  else {
    local_30 = *(undefined4 *)(param_4 + 0x1b8);
    uStack_2c = *(undefined4 *)(param_4 + 0x1bc);
    uStack_28 = *(undefined4 *)(param_4 + 0x1c0);
  }
  FUN_00193da0(param_5,&local_30,param_6,param_7);
  return 1;
}
