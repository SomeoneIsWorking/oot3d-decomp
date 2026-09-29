// OoT3D decomp @ 002b4a18  name=FUN_002b4a18  size=272

void FUN_002b4a18(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  uVar2 = DAT_002b4b28;
  if (*(int *)(param_1 + 0xa5c) != 0) {
    fVar5 = *(float *)(param_1 + 0x84);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < *(float *)(param_1 + 0x2c)) << 0x1f;
    in_fpscr = uVar1 | (uint)(NAN(fVar5) || NAN(*(float *)(param_1 + 0x2c))) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(float *)(param_1 + 0x2c) = fVar5;
      *(undefined4 *)(param_1 + 100) = uVar2;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      *(undefined4 *)(param_1 + 0xa50) = 0;
    }
  }
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar3 != 0) {
    if (*(int *)(param_1 + 0xa5c) == 0) {
      uVar4 = FUN_0036ae14(param_1 + 0x1a4,1);
      uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_002b4b30,uVar2,uVar4,DAT_002b4b2c,param_1 + 0x1a4,1,2);
      *(undefined4 *)(param_1 + 0xa5c) = 0xf;
      FUN_00375bcc(param_1,DAT_002b4b34);
    }
    else if ((*(uint *)(DAT_002b4b38 + param_2) & 1) == 0) {
      FUN_0034eb00(param_1);
    }
    else {
      FUN_0032ffc0(param_1,param_2);
    }
  }
  if ((*(uint *)(param_2 + 0xf8) & 0x5f) == 0) {
    FUN_00375bcc(param_1,DAT_002b4b3c);
    return;
  }
  return;
}
