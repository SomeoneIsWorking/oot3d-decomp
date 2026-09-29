// OoT3D decomp @ 0043df30  name=FUN_0043df30  size=292

void FUN_0043df30(void)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint in_fpscr;
  float local_30;
  float local_2c;
  float local_28;

  fVar7 = DAT_0043e064;
  fVar6 = DAT_0043e060;
  iVar5 = DAT_0043e05c;
  fVar4 = DAT_0043e058;
  fVar3 = DAT_0043e054;
  iVar8 = 0;
  do {
    if (iVar8 - 0x10U < 10) {
      local_30 = (float)VectorSignedToFloat(*(undefined4 *)(iVar5 + 0x44),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_30 = local_30 * fVar3;
      if (0x3f800000 < (int)local_30) {
        local_30 = fVar4;
      }
      FUN_002fcdec(*(undefined4 *)(iVar5 + 0x70),&local_30,1,iVar8);
      local_2c = fVar6;
      local_28 = fVar6;
      FUN_002f9430(*(undefined4 *)(iVar5 + 0x70),&local_2c,1,iVar8);
    }
    else if (iVar8 - 0x1aU < 8) {
      local_2c = (float)VectorSignedToFloat(*(int *)(iVar5 + 0x44) * -0x50 + 400,
                                            (byte)(in_fpscr >> 0x15) & 3);
      uVar1 = in_fpscr & 0xfffffff | (uint)(local_2c < fVar6) << 0x1f |
              (uint)(local_2c == fVar6) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(local_2c) || NAN(fVar6)) << 0x1c;
      local_28 = fVar6;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        local_2c = fVar6;
      }
      FUN_002f9430(*(undefined4 *)(iVar5 + 0x70),&local_2c,1,iVar8);
    }
    else {
      local_2c = fVar7;
      FUN_002f9430(*(undefined4 *)(iVar5 + 0x70),&local_2c,1,iVar8);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x3e);
  return;
}
