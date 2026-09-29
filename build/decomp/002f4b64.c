// OoT3D decomp @ 002f4b64  name=FUN_002f4b64  size=488

void FUN_002f4b64(void)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  undefined4 *puVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  uint in_fpscr;
  float local_2c;
  float local_28;
  float local_24;

  fVar7 = DAT_002f4d5c;
  fVar6 = DAT_002f4d58;
  puVar5 = DAT_002f4d54;
  fVar4 = DAT_002f4d50;
  fVar3 = DAT_002f4d4c;
  iVar8 = 0;
  do {
    if ((iVar8 - 1U < 0x38) && (iVar8 < 8)) {
      local_2c = (float)VectorSignedToFloat(puVar5[-10],(byte)(in_fpscr >> 0x15) & 3);
      local_2c = local_2c * fVar3;
      if (0x3f800000 < (int)local_2c) {
        local_2c = fVar4;
      }
      FUN_002fcdec(puVar5[1],&local_2c,1,iVar8);
      local_28 = fVar7;
      local_24 = fVar7;
      FUN_002f9430(puVar5[1],&local_28,1,iVar8);
    }
    else if (iVar8 - 8U < 8) {
      local_28 = fVar7;
      local_24 = (float)VectorSignedToFloat((puVar5[-10] + -6) * -8,(byte)(in_fpscr >> 0x15) & 3);
      uVar1 = in_fpscr & 0xfffffff | (uint)(local_24 < fVar7) << 0x1f |
              (uint)(local_24 == fVar7) << 0x1e;
      in_fpscr = uVar1 | (uint)(NAN(local_24) || NAN(fVar7)) << 0x1c;
      bVar2 = (byte)(uVar1 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
        local_24 = fVar7;
      }
      FUN_002f9430(puVar5[1],&local_28,1,iVar8);
    }
    else {
      local_28 = fVar6;
      FUN_002f9430(puVar5[1],&local_28,1,iVar8);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x3e);
  local_28 = (float)VectorSignedToFloat(puVar5[-10] * -0x50 + 400,(byte)(in_fpscr >> 0x15) & 3);
  local_24 = fVar7;
  if (local_28 <= fVar7) {
    local_28 = fVar7;
  }
  if (puVar5[-0xb] == 0) {
    if (puVar5[-0x19] != 2) {
LAB_002f4d08:
      FUN_002f9430(*puVar5,&local_28,1,0);
      local_28 = fVar6;
      FUN_002f9430(puVar5[1],&local_28,1,0);
      return;
    }
  }
  else if (puVar5[-0x19] == 2) goto LAB_002f4d08;
  FUN_002f9430(puVar5[1],&local_28,1,0);
  local_28 = fVar6;
  FUN_002f9430(*puVar5,&local_28,1,0);
  return;
}
