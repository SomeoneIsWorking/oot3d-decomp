// OoT3D decomp @ 0043e994  name=FUN_0043e994  size=1788

void FUN_0043e994(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint in_fpscr;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;

  FUN_0033f428(0,0,0x140,0x100,1);
  iVar3 = DAT_0043ecfc;
  uVar2 = DAT_0043ecf8;
  uVar1 = DAT_0043ecf4;
  local_48 = DAT_0043ecf4;
  local_44 = DAT_0043ecf8;
  iVar11 = 0;
  do {
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x22);
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x25);
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x28);
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x2b);
    uVar8 = DAT_0043ed10;
    uVar7 = DAT_0043ed0c;
    uVar6 = DAT_0043ed08;
    uVar5 = DAT_0043ed04;
    iVar4 = DAT_0043ed00;
    iVar11 = iVar11 + 1;
  } while (iVar11 < 3);
  if (*(int *)(DAT_0043ed00 + 8) == 4) {
    local_48 = DAT_0043ed10;
    if (*(int *)(DAT_0043ed00 + 0x30) == -1) {
      local_44 = DAT_0043ed10;
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x1d);
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x21);
      local_4c = uVar7;
      FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0x1d);
      FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0x21);
      return;
    }
    local_44 = DAT_0043ed04;
    local_4c = DAT_0043ed08;
    if (*(int *)(DAT_0043ed00 + 0x2c) == 0) {
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x1d);
      FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0x1d);
      local_48 = uVar8;
      local_44 = uVar8;
      iVar11 = 0;
      do {
        FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x28);
        iVar11 = iVar11 + 1;
      } while (iVar11 < 3);
      return;
    }
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x21);
    FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0x21);
    local_48 = uVar8;
    local_44 = uVar8;
    iVar11 = 0;
    do {
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x2b);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    return;
  }
  if (*(int *)(DAT_0043ed00 + 8) < 4) {
    local_48 = DAT_0043ed10;
    local_44 = DAT_0043ed10;
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0xf);
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0xb);
    local_4c = uVar7;
    FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0xf);
    FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0xb);
  }
  uVar10 = DAT_0043f0c8;
  uVar9 = DAT_0043f0c4;
  uVar7 = DAT_0043f0c0;
  iVar11 = *(int *)(iVar4 + 0x30);
  if (iVar11 == -1) {
    local_3c = uVar8;
    local_40 = uVar8;
    local_34 = uVar8;
    local_38 = uVar8;
    local_2c = uVar8;
    local_30 = uVar8;
    FUN_002fc534(*(undefined4 *)(iVar3 + 4),&local_30,&local_40,1,0x2f);
    FUN_002fc40c(*(undefined4 *)(iVar3 + 4),&local_38,&local_40,1,0x2f);
    local_48 = uVar1;
    local_44 = uVar2;
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x2f);
    return;
  }
  if (iVar11 == -0xb) {
    local_48 = uVar8;
    local_44 = uVar8;
    iVar11 = 0;
    do {
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x25);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    local_48 = uVar8;
    local_44 = uVar5;
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0xf);
    local_4c = uVar6;
    FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0xf);
    return;
  }
  if (iVar11 == -10) {
    local_48 = uVar8;
    local_44 = uVar8;
    iVar11 = 0;
    do {
      FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,iVar11 + 0x22);
      iVar11 = iVar11 + 1;
    } while (iVar11 < 3);
    local_48 = uVar8;
    local_44 = uVar5;
    FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0xb);
    local_4c = uVar6;
    FUN_002fcdec(*(undefined4 *)(iVar3 + 4),&local_4c,1,0xb);
    return;
  }
  local_30 = DAT_0043f0b4;
  local_2c = DAT_0043f0b8;
  if (iVar11 == -2) {
    if (*(int *)(iVar4 + 0x40) != 0) goto LAB_0043edbc;
  }
  else {
    if (iVar11 == -3) goto LAB_0043edbc;
    if (iVar11 != -0xc) {
      if ((iVar11 == -9 || iVar11 == -8) || iVar11 == -6) {
        local_30 = VectorSignedToFloat(*(int *)(iVar4 + 0x34) * 0x1a + 0x1f,
                                       (byte)(in_fpscr >> 0x15) & 3);
        local_2c = VectorSignedToFloat(*(int *)(iVar4 + 0x38) * 0x1a + 0x42,
                                       (byte)(in_fpscr >> 0x15) & 3);
        local_40 = DAT_0043f0c0;
        local_3c = DAT_0043f0cc;
        FUN_002fc534(*(undefined4 *)(iVar3 + 4),&local_30,&local_40,1,0x2f);
        local_38 = DAT_0043f0d0;
        local_34 = uVar8;
        FUN_002fc40c(*(undefined4 *)(iVar3 + 4),&local_38,&local_40,1,0x2f);
        local_44 = uVar8;
        local_48 = uVar8;
        FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x2f);
        return;
      }
      if (iVar11 == -5) {
        local_30 = DAT_0043f0d4;
        local_2c = DAT_0043f0d8;
        local_40 = DAT_0043f0dc;
        local_3c = DAT_0043f0c0;
        FUN_002fc534(*(undefined4 *)(iVar3 + 4),&local_30,&local_40,1,0x2f);
        local_38 = DAT_0043f0e0;
        local_34 = DAT_0043f0e4;
        FUN_002fc40c(*(undefined4 *)(iVar3 + 4),&local_38,&local_40,1,0x2f);
        local_44 = uVar8;
        local_48 = uVar8;
        FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x2f);
        return;
      }
      if (iVar11 != -7) {
        if (*(int *)(iVar4 + 8) == 2) {
          local_30 = VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x18),(byte)(in_fpscr >> 0x15) & 3)
          ;
          local_2c = VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x1c),(byte)(in_fpscr >> 0x15) & 3)
          ;
        }
        else {
          local_30 = VectorSignedToFloat(*(int *)(iVar4 + 0x34) * 0x1a + 0x1f,
                                         (byte)(in_fpscr >> 0x15) & 3);
          local_2c = VectorSignedToFloat(*(int *)(iVar4 + 0x38) * 0x1a + 0x42,
                                         (byte)(in_fpscr >> 0x15) & 3);
        }
        local_40 = DAT_0043f0c0;
        local_3c = DAT_0043f0c0;
        FUN_002fc534(*(undefined4 *)(iVar3 + 4),&local_30,&local_40,1,0x2f);
        local_38 = DAT_0043f0e8;
        local_34 = uVar7;
        FUN_002fc40c(*(undefined4 *)(iVar3 + 4),&local_38,&local_40,1,0x2f);
        local_44 = uVar8;
        local_48 = uVar8;
        FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x2f);
        return;
      }
      local_30 = VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x18),(byte)(in_fpscr >> 0x15) & 3);
      local_2c = VectorSignedToFloat(*(undefined4 *)(iVar4 + 0x1c),(byte)(in_fpscr >> 0x15) & 3);
      goto LAB_0043edbc;
    }
  }
  local_30 = DAT_0043f0b0;
LAB_0043edbc:
  local_40 = DAT_0043f0bc;
  local_3c = DAT_0043f0c0;
  FUN_002fc534(*(undefined4 *)(iVar3 + 4),&local_30,&local_40,1,0x2f);
  local_38 = uVar9;
  local_34 = uVar10;
  FUN_002fc40c(*(undefined4 *)(iVar3 + 4),&local_38,&local_40,1,0x2f);
  local_44 = uVar8;
  local_48 = uVar8;
  FUN_002f9430(*(undefined4 *)(iVar3 + 4),&local_48,1,0x2f);
  return;
}
