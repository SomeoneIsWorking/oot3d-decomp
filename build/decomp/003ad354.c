// OoT3D decomp @ 003ad354  name=FUN_003ad354  size=184

void FUN_003ad354(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_003758b0(*(float *)(*(int *)(param_1 + 0x124) + 0x10) - *(float *)(param_1 + 0x30),
                       *(float *)(*(int *)(param_1 + 0x124) + 8) - *(float *)(param_1 + 0x28));
  FUN_00375a18(param_1 + 0xbe,iVar2,4,4000,1);
  uVar1 = DAT_003ad40c;
  if ((iVar2 - *(short *)(param_1 + 0xbe)) + 100U < 0xc9) {
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0xc0);
    *(undefined4 *)(param_1 + 100) = uVar1;
    uVar1 = DAT_003ad410;
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x30);
    FUN_00375bcc(param_1,uVar1);
    FUN_003717ac(param_1 + 0x1a4,DAT_003ad414,1);
    *(undefined4 *)(param_1 + 0x638) = DAT_003ad418;
  }
  return;
}

