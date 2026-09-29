// OoT3D decomp @ 003c3e54  name=FUN_003c3e54  size=756

void FUN_003c3e54(int param_1,undefined4 param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  undefined4 local_30;

  fVar5 = DAT_003c416c;
  uVar4 = DAT_003c4168;
  fVar3 = DAT_003c4164;
  fVar2 = DAT_003c4160;
  sVar1 = *(short *)(param_1 + 600);
  if (sVar1 < 0x28) {
    iVar7 = 0;
    do {
      iVar8 = param_1 + iVar7 * 0x40;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 600),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = (float)VectorSignedToFloat(iVar7 + 0x3b,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00373500(fVar9 - fVar10 * fVar3,fVar2,uVar4,iVar8 + 0x298);
      iVar6 = 4 - iVar7;
      iVar7 = iVar7 + 1;
      fVar9 = (float)VectorSignedToFloat(iVar6 * iVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 600),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar2 + fVar9 * fVar10 * fVar5;
      *(float *)(iVar8 + 0x2b0) = fVar9;
      *(float *)(iVar8 + 0x2a8) = fVar9;
    } while (iVar7 < 5);
    return;
  }
  if (0x5e < sVar1) {
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_34 = *(float *)(param_1 + 0x2c);
    local_30 = *(undefined4 *)(param_1 + 0x30);
    if (*(char *)(param_1 + 0x3e2) == '\x01') {
      FUN_0036df58(param_2,&local_38,0x15);
    }
    else if (*(char *)(param_1 + 0x3e2) == '\x02') {
      FUN_0036df58(param_2,&local_38,0x16);
    }
    if (*(char *)(param_1 + 0x3e3) == '\x02') {
      FUN_0036df58(param_2,&local_38,0x18);
    }
    else if (*(char *)(param_1 + 0x3e3) == '\x03') {
      FUN_0036df58(param_2,&local_38,0x17);
    }
    switch(*(undefined1 *)(param_1 + 0x3e4)) {
    default:
      FUN_00374444(param_2,param_1,&local_38,0xc0);
      break;
    case 1:
      FUN_0036df58(param_2,&local_38,0xf);
      break;
    case 2:
      FUN_0036df58(param_2,&local_38,5);
      break;
    case 3:
      FUN_0036df58(param_2,&local_38,0x12);
      break;
    case 4:
      FUN_0036df58(param_2,&local_38,0x14);
      break;
    case 5:
      FUN_0036df58(param_2,&local_38,2);
    }
    FUN_00374428(param_1);
    return;
  }
  if (sVar1 == 0x58) {
    local_38 = *(undefined4 *)(param_1 + 0x28);
    local_34 = *(float *)(param_1 + 0x2c) + DAT_003c4174;
    local_30 = *(undefined4 *)(param_1 + 0x30);
    local_48 = DAT_003c4170;
    local_4c = DAT_003c4170;
    local_50 = DAT_003c4170;
    local_3c = DAT_003c4170;
    local_40 = DAT_003c4170;
    local_44 = DAT_003c4170;
    FUN_003642f4(param_2,&local_38,&local_44,&local_50,100,0,0xff,0xff,0xff,0xff,0xff,0,0,1,0xb,1);
    return;
  }
  FUN_00373500(DAT_003c4170,DAT_003c4160,*(undefined4 *)(param_1 + 0x3d8),param_1 + 0x54);
  FUN_00373500(DAT_003c417c,fVar2,DAT_003c4178,param_1 + 0x3d8);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x54);
  return;
}
