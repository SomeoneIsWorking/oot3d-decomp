// OoT3D decomp @ 0010623c  name=FUN_0010623c  size=212

void FUN_0010623c(int param_1)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;

  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x1000000;
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00373500(DAT_00106318,DAT_00106314,DAT_00106310,param_1 + 0x6c);
  iVar3 = DAT_00106320;
  fVar2 = DAT_0010631c;
  uVar5 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 100) == DAT_0010631c) << 0x1e |
          (uint)(DAT_0010631c <= *(float *)(param_1 + 100)) << 0x1d;
  bVar1 = (byte)(uVar5 >> 0x18);
  if ((!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) && ((*(ushort *)(param_1 + 0x90) & 1) != 0)) {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_00106320 + 0x14));
    uVar4 = VectorSignedToFloat(uVar4,(byte)(uVar5 >> 0x15) & 3);
    FUN_00375c08(DAT_00106324,fVar2,uVar4,fVar2,param_1 + 0x1a4,*(undefined4 *)(iVar3 + 0x14),2);
    *(undefined4 *)(param_1 + 0x708) = DAT_00106328;
    *(undefined2 *)(param_1 + 0x724) = 0xf;
    if (*(short *)(param_1 + 0x1c) < 6) {
      FUN_00375bcc(param_1,DAT_0010632c);
    }
    else {
      FUN_00375bcc(param_1,DAT_00106330);
    }
  }
  *(undefined2 *)(param_1 + 0x71c) = 0;
  return;
}
