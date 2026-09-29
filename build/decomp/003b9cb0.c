// OoT3D decomp @ 003b9cb0  name=FUN_003b9cb0  size=60

void FUN_003b9cb0(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;

  iVar2 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),uRam003b9cec,param_1 + 0x2c);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 1;
    FUN_00370350(DAT_00362a3c,param_1 + 0x1a4,1);
    *(short *)(param_1 + 0xa4e) = (short)DAT_00362a40;
    *(undefined2 *)(param_1 + 0xa50) = 0x78;
    *(ushort *)(param_1 + 0xa52) = (ushort)*(byte *)(param_1 + 0xa4c) * -0x200;
    *(ushort *)(param_1 + 0x36) =
         *(short *)(param_1 + 0xbe) + (ushort)*(byte *)(param_1 + 0xa4c) * -0x4000;
    fVar3 = (float)FUN_002cfca0();
    fVar1 = DAT_00362a44;
    *(float *)(param_1 + 0x28) = *(float *)(param_1 + 8) + fVar3 * DAT_00362a44;
    fVar3 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x36));
    *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x10) + fVar3 * fVar1;
    *(byte *)(param_1 + 0xad4) = *(byte *)(param_1 + 0xad4) | 1;
    *(byte *)(param_1 + 0xa65) = *(byte *)(param_1 + 0xa65) | 1;
    *(undefined4 *)(param_1 + 0xa48) = DAT_00362a48;
    return;
  }
  return;
}
