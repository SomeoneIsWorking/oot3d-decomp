// OoT3D decomp @ 0027fc54  name=FUN_0027fc54  size=172

void FUN_0027fc54(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  fVar1 = DAT_0027fd00;
  FUN_0036e168(DAT_0027fd00,DAT_0027fd08,DAT_0027fd04,DAT_0027fd00,param_1 + 0x6c);
  if (*(float *)(param_1 + 0x6c) == fVar1) {
    *(undefined4 *)(param_1 + 0xc4) = DAT_0027fd0c;
    FUN_0036e734(param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0x6c) = DAT_0027fd10;
    *(undefined4 *)(param_1 + 0x524) = 3;
    uVar2 = DAT_0027fd14;
    *(undefined4 *)(param_1 + 0x534) = 300;
    iVar3 = DAT_0027fd18;
    *(undefined4 *)(param_1 + 0x70) = uVar2;
    *(float *)(param_1 + 0x560) = fVar1;
    *(float *)(param_1 + 0x55c) = fVar1;
    *(undefined2 *)(iVar3 + param_1) = 0;
    uVar2 = DAT_0027fd1c;
    *(ushort *)(param_1 + 0x90) = *(ushort *)(param_1 + 0x90) & 0xfffe;
    FUN_00375bcc(param_1,uVar2);
    *(undefined4 *)(param_1 + 0x52c) = DAT_0027fd20;
  }
  return;
}
