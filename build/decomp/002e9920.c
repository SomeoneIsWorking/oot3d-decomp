// OoT3D decomp @ 002e9920  name=FUN_002e9920  size=196

void FUN_002e9920(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined8 uVar3;

  iVar1 = DAT_002e99e4;
  *(undefined4 *)(DAT_002e99e4 + 0x28) = 0;
  if (*(int *)(iVar1 + 0x1c) != 0) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    param_2 = extraout_r1;
  }
  if (*(int *)(iVar1 + 0x20) != 0) {
    FUN_002f6944();
    FUN_003525d4();
    *(undefined4 *)(iVar1 + 0x20) = 0;
    param_2 = extraout_r1_00;
  }
  if (((*DAT_002e99e8 & 1) == 0) &&
     (uVar3 = FUN_003679b4(DAT_002e99e8), param_2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0
     )) {
    FUN_0036788c(DAT_002e99ec);
    param_2 = DAT_002e99f4;
  }
  FUN_002e9a1c(DAT_002e99f8,param_2);
  FUN_002f74a4(6);
  if (param_1 == 0) {
    FUN_002f43d8(0);
  }
  puVar2 = DAT_002e99fc;
  *DAT_002e99fc = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  return;
}
