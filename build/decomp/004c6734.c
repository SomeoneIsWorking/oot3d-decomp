// OoT3D decomp @ 004c6734  name=FUN_004c6734  size=332

int FUN_004c6734(int param_1,undefined4 param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;

  uVar4 = (uint)*(char *)(param_1 + 4);
  param_1 = param_1 + 8;
  if (uVar4 == 1) {
    return param_1;
  }
  if ((int)uVar4 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~uVar4 & 1;
  }
  iVar3 = 0;
  if (uVar2 != 0) {
    do {
      puVar5 = (ushort *)(param_1 + iVar3 * 4);
      fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)*puVar5,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = in_fpscr & 0xfffffff;
      in_fpscr = uVar6 | (uint)(fVar8 == fVar7) << 0x1e | (uint)(fVar7 <= fVar8) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
        fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
        fVar8 = (float)VectorUnsignedToFloat((uint)puVar5[2],(byte)(in_fpscr >> 0x15) & 3);
        uVar6 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f | (uint)(fVar8 == fVar7) << 0x1e;
        in_fpscr = uVar6 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
        bVar1 = (byte)(uVar6 >> 0x18);
        if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          return param_1 + iVar3 * 4;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  do {
    if ((int)(uVar4 - 1) <= (int)uVar2) {
      return param_1 + uVar4 * 4 + -4;
    }
    puVar5 = (ushort *)(param_1 + uVar2 * 4);
    fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = (float)VectorUnsignedToFloat((uint)*puVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar6 = in_fpscr & 0xfffffff;
    if (fVar8 <= fVar7) {
      fVar7 = (float)VectorSignedToFloat(param_2,(byte)(uVar6 >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)puVar5[2],(byte)(uVar6 >> 0x15) & 3);
      uVar6 = uVar6 | (uint)(fVar8 < fVar7) << 0x1f;
      if (fVar8 != fVar7 && SUB41(uVar6 >> 0x1f,0) == (NAN(fVar8) || NAN(fVar7))) {
        return param_1 + uVar2 * 4;
      }
    }
    fVar7 = (float)VectorSignedToFloat(param_2,(byte)(uVar6 >> 0x15) & 3);
    fVar8 = (float)VectorUnsignedToFloat((uint)puVar5[2],(byte)(uVar6 >> 0x15) & 3);
    in_fpscr = uVar6 & 0xfffffff | (uint)(fVar8 == fVar7) << 0x1e | (uint)(fVar7 <= fVar8) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    if (!(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6)) {
      fVar7 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)puVar5[4],(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = uVar6 & 0xfffffff | (uint)(fVar8 < fVar7) << 0x1f | (uint)(fVar8 == fVar7) << 0x1e;
      in_fpscr = uVar6 | (uint)(NAN(fVar8) || NAN(fVar7)) << 0x1c;
      bVar1 = (byte)(uVar6 >> 0x18);
      if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        return param_1 + uVar2 * 4 + 4;
      }
    }
    uVar2 = uVar2 + 2;
  } while( true );
}
