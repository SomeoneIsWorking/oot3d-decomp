// OoT3D decomp @ 0043e220  name=FUN_0043e220  size=392

void FUN_0043e220(void)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float local_2c;
  float local_28;
  float local_24;

  iVar3 = DAT_0043e3b0;
  fVar2 = DAT_0043e3ac;
  iVar1 = DAT_0043e3a8;
  if (*(int *)(DAT_0043e3a8 + 0x40) == 0) {
    if (*(int *)(DAT_0043e3a8 + 8) < 2) {
LAB_0043e260:
      iVar7 = 0;
      goto LAB_0043e264;
    }
  }
  else if (*(int *)(DAT_0043e3a8 + 8) < 3) goto LAB_0043e260;
  iVar7 = 1;
LAB_0043e264:
  local_28 = (float)VectorSignedToFloat(*(int *)(DAT_0043e3a8 + 0x44) * -0x50,
                                        (byte)(in_fpscr >> 0x15) & 3);
  local_24 = DAT_0043e3ac;
  FUN_002f9430(*(undefined4 *)(DAT_0043e3b0 + iVar7 * 4),&local_28,1,0);
  fVar6 = DAT_0043e3bc;
  fVar5 = DAT_0043e3b8;
  fVar4 = DAT_0043e3b4;
  iVar7 = 0;
  do {
    if ((iVar7 - 1U < 0x38) && (iVar7 < 8)) {
      fVar8 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x44),(byte)(in_fpscr >> 0x15) & 3)
      ;
      local_2c = fVar5 - fVar8 * fVar4;
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar2 <= local_2c) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        local_2c = fVar2;
      }
      FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_2c,1,iVar7);
      local_28 = fVar2;
      local_24 = fVar2;
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_28,1,iVar7);
    }
    else if (iVar7 - 9U < 7) {
      local_28 = fVar2;
      local_24 = (float)VectorSignedToFloat(*(int *)(iVar1 + 0x44) << 3,(byte)(in_fpscr >> 0x15) & 3
                                           );
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_28,1,iVar7);
    }
    else if ((iVar7 != 0) || (*(int *)(iVar1 + 8) < 2)) {
      local_28 = fVar6;
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_28,1,iVar7);
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 0x3e);
  return;
}
