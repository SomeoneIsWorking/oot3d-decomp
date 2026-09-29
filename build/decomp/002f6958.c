// OoT3D decomp @ 002f6958  name=FUN_002f6958  size=428

bool FUN_002f6958(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 local_1c;
  undefined4 local_18;

  fVar3 = DAT_002f6ba8;
  fVar2 = DAT_002f6ba4;
  iVar1 = DAT_002f6ba0;
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(DAT_002f6ba0 + 0x38),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(DAT_002f6ba8 - fVar6 * DAT_002f6ba4,DAT_002f6ba8,*(undefined4 *)(DAT_002f6ba0 + 8),1,
               0);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(fVar3 - fVar6 * fVar2,fVar3,*(undefined4 *)(iVar1 + 8),1);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(fVar3 - fVar6 * fVar2,fVar3,*(undefined4 *)(iVar1 + 8),1,2);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(fVar3 - fVar6 * fVar2,fVar3,*(undefined4 *)(iVar1 + 8),1,0x23);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(fVar3 - fVar6 * fVar2,fVar3,*(undefined4 *)(iVar1 + 8),1,0x24);
  fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x38),(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f8b80(fVar3 - fVar6 * fVar2,fVar3,*(undefined4 *)(iVar1 + 8),1,0x25);
  uVar4 = DAT_002f6bac;
  iVar1 = DAT_002f6ba0;
  iVar5 = 0;
  do {
    local_18 = uVar4;
    local_1c = uVar4;
    switch(iVar5) {
    case 0:
    case 1:
    case 2:
    case 0x23:
    case 0x24:
    case 0x25:
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      local_1c = VectorSignedToFloat(*(int *)(iVar1 + 0x38) * -0x3c,(byte)(in_fpscr >> 0x15) & 3);
      break;
    default:
      local_18 = DAT_002f6bb0;
      local_1c = DAT_002f6bb0;
      break;
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x26:
      local_18 = VectorSignedToFloat(*(int *)(iVar1 + 0x38) << 3,(byte)(in_fpscr >> 0x15) & 3);
    }
    FUN_002f9430(*(undefined4 *)(iVar1 + 8),&local_1c,1,iVar5);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x6c);
  iVar5 = *(int *)(iVar1 + 0x38) + 1;
  *(int *)(iVar1 + 0x38) = iVar5;
  return 5 < iVar5;
}
