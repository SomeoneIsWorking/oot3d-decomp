// OoT3D decomp @ 002e76b8  name=FUN_002e76b8  size=284

undefined4
FUN_002e76b8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined8 uVar6;

  piVar4 = param_2;
  if (((*DAT_002e77d4 & 1) == 0) &&
     (uVar6 = FUN_003679b4(DAT_002e77d4), piVar4 = (int *)((ulonglong)uVar6 >> 0x20),
     (int)uVar6 != 0)) {
    FUN_0036788c(DAT_002e77d8);
    piVar4 = DAT_002e77e0;
  }
  iVar3 = DAT_002e77e4;
  FUN_00305364(param_1,piVar4);
  uVar5 = *(undefined4 *)(iVar3 + 0xf3c);
  *(int **)(param_1 + 4) = param_2;
  FUN_00344410(param_1 + 0xf4,uVar5);
  iVar1 = FUN_002dadd8(param_1 + 8,param_1 + 0xf4,uVar5,param_2);
  if (iVar1 != 0) {
    iVar1 = iVar3 + 0x38;
    if (*(int *)(iVar3 + 0x3c) == 0) {
      iVar1 = 0;
    }
    iVar2 = (**(code **)(*param_2 + 8))(param_2,1000);
    *(int *)(param_1 + 0xf0) = iVar2;
    if (iVar2 != 0) {
      FUN_002ffa48();
    }
    iVar3 = FUN_002dac68(*(undefined4 *)(param_1 + 0xf0),iVar3 + 0x2c,iVar1,param_3,2,param_4,
                         param_5,param_2);
    if (iVar3 != 0) {
      return 1;
    }
  }
  FUN_00305364(param_1);
  return 0;
}
