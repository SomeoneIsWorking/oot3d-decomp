// OoT3D decomp @ 002f53c8  name=FUN_002f53c8  size=368

bool FUN_002f53c8(void)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  float fVar6;
  float fVar7;
  undefined4 local_1c;
  undefined4 local_18;

  fVar2 = DAT_002f55c8;
  iVar1 = DAT_002f55c0;
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(DAT_002f55c0 + 0x38),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar6 * DAT_002f55c4;
  if (0x3f800000 < (int)(fVar6 * DAT_002f55c4)) {
    fVar7 = DAT_002f55c8;
  }
  FUN_002f8b80(fVar7,DAT_002f55c8,*(undefined4 *)(DAT_002f55c0 + 8),1,0x33);
  FUN_002f8b80(fVar7,fVar2,*(undefined4 *)(iVar1 + 8),1,0x34);
  FUN_002f8b80(fVar7,fVar2,*(undefined4 *)(iVar1 + 8),1,0x35);
  uVar3 = DAT_002f55cc;
  iVar4 = 0;
  do {
    local_18 = uVar3;
    local_1c = uVar3;
    uVar5 = uVar3;
    switch(iVar4) {
    case 0x33:
    case 0x34:
    case 0x35:
      break;
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
      local_18 = VectorSignedToFloat((5 - *(int *)(iVar1 + 0x38)) * 8,(byte)(in_fpscr >> 0x15) & 3);
      uVar5 = local_18;
      break;
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
    case 0x46:
    case 0x47:
    case 0x48:
    case 0x49:
    case 0x4a:
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
    case 0x51:
    case 0x52:
    case 0x53:
    case 0x54:
      uVar5 = VectorSignedToFloat((5 - *(int *)(iVar1 + 0x38)) * 0x50,(byte)(in_fpscr >> 0x15) & 3);
      local_1c = uVar5;
      break;
    default:
      local_18 = DAT_002f55d0;
      uVar5 = DAT_002f55d0;
      local_1c = DAT_002f55d0;
    }
    if (*(int *)(iVar1 + 0x3c) == 0) {
      if (((iVar4 == 0x36 || iVar4 == 0x37) || iVar4 == 0x38) || iVar4 == 0x39) {
        uVar5 = DAT_002f55d0;
      }
      if (((iVar4 == 0x36 || iVar4 == 0x37) || iVar4 == 0x38) || iVar4 == 0x39) {
        local_18 = uVar5;
      }
    }
    if (*(int *)(iVar1 + 0x40) == 0) {
      if (((iVar4 == 0x3a || iVar4 == 0x3b) || iVar4 == 0x3c) || iVar4 == 0x3d) {
        uVar5 = DAT_002f55d0;
      }
      if (((iVar4 == 0x3a || iVar4 == 0x3b) || iVar4 == 0x3c) || iVar4 == 0x3d) {
        local_18 = uVar5;
      }
    }
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_1c,1,iVar4);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x6c);
  iVar4 = *(int *)(iVar1 + 0x38) + 1;
  *(int *)(iVar1 + 0x38) = iVar4;
  return 5 < iVar4;
}
