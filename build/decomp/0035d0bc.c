// OoT3D decomp @ 0035d0bc  name=FUN_0035d0bc  size=176

undefined4 FUN_0035d0bc(int param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  ushort uVar3;
  float fVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;

  fVar4 = DAT_0035d16c;
  uVar2 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 100) < DAT_0035d16c) << 0x1f;
  uVar6 = uVar2 | (uint)(NAN(*(float *)(param_1 + 100)) || NAN(DAT_0035d16c)) << 0x1c;
  if ((byte)(uVar2 >> 0x1f) != ((byte)(uVar6 >> 0x1c) & 1)) {
    bVar5 = *(short *)(param_1 + 0x510) != 0;
    uVar3 = 0;
    if (bVar5) {
      uVar3 = *(ushort *)(param_1 + 0x90);
    }
    if (bVar5 && (uVar3 & 1) != 0) {
      FUN_00375bcc(param_1,DAT_0035d170);
      *(undefined4 *)(param_1 + 0x504) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_1 + 0x2c);
      *(undefined4 *)(param_1 + 0x50c) = *(undefined4 *)(param_1 + 0x30);
      FUN_003179d0(param_1,param_2,10);
      sVar1 = *(short *)(param_1 + 0x510) + -1;
      fVar7 = (float)VectorSignedToFloat(4 - *(short *)(param_1 + 0x510),(byte)(uVar6 >> 0x15) & 3);
      *(float *)(param_1 + 100) = DAT_0035d174 / fVar7;
      *(short *)(param_1 + 0x510) = sVar1;
      if (sVar1 == 0) {
        *(float *)(param_1 + 100) = fVar4;
        return 1;
      }
    }
  }
  return 0;
}
