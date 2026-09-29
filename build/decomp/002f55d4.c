// OoT3D decomp @ 002f55d4  name=FUN_002f55d4  size=384

bool FUN_002f55d4(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_1c;
  undefined4 local_18;

  fVar3 = DAT_002f57e4;
  fVar2 = DAT_002f57e0;
  iVar1 = DAT_002f57dc;
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(DAT_002f57dc + 0x38),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(DAT_002f57e4 - fVar7 * DAT_002f57e0,DAT_002f57e4,*(undefined4 *)(DAT_002f57dc + 8),1,
               0x33);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(fVar3 - fVar7 * fVar2,fVar3,*(undefined4 *)(iVar1 + 8),1,0x34);
  fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(fVar3 - fVar7 * fVar2,fVar3,*(undefined4 *)(iVar1 + 8),1,0x35);
  uVar4 = DAT_002f57e8;
  iVar1 = DAT_002f57dc;
  iVar5 = 0;
  do {
    local_18 = uVar4;
    local_1c = uVar4;
    uVar6 = uVar4;
    switch(iVar5) {
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
      local_18 = VectorSignedToFloat(*(int *)(iVar1 + 0x38) << 3,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = local_18;
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
      uVar6 = VectorSignedToFloat(*(int *)(iVar1 + 0x38) * -0x50,(byte)(in_fpscr >> 0x15) & 3);
      local_1c = uVar6;
      break;
    default:
      local_18 = DAT_002f57ec;
      uVar6 = DAT_002f57ec;
      local_1c = DAT_002f57ec;
    }
    if (*(int *)(iVar1 + 0x3c) == 0) {
      if (((iVar5 == 0x36 || iVar5 == 0x37) || iVar5 == 0x38) || iVar5 == 0x39) {
        uVar6 = DAT_002f57ec;
      }
      if (((iVar5 == 0x36 || iVar5 == 0x37) || iVar5 == 0x38) || iVar5 == 0x39) {
        local_18 = uVar6;
      }
    }
    if (*(int *)(iVar1 + 0x40) == 0) {
      if (((iVar5 == 0x3a || iVar5 == 0x3b) || iVar5 == 0x3c) || iVar5 == 0x3d) {
        uVar6 = DAT_002f57ec;
      }
      if (((iVar5 == 0x3a || iVar5 == 0x3b) || iVar5 == 0x3c) || iVar5 == 0x3d) {
        local_18 = uVar6;
      }
    }
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_1c,1,iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x6c);
  iVar5 = *(int *)(iVar1 + 0x38) + 1;
  *(int *)(iVar1 + 0x38) = iVar5;
  return 5 < iVar5;
}
