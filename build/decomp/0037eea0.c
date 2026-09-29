// OoT3D decomp @ 0037eea0  name=FUN_0037eea0  size=848

void FUN_0037eea0(int param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  float local_2c;
  float local_28;
  float local_24;

  uVar6 = DAT_0037f24c;
  uVar5 = DAT_0037f248;
  uVar4 = DAT_0037f240;
  uVar3 = DAT_0037f23c;
  uVar2 = DAT_0037f22c;
  local_38 = DAT_0037f22c;
  local_34 = DAT_0037f22c;
  local_30 = DAT_0037f22c;
  local_44 = DAT_0037f22c;
  local_40 = DAT_0037f22c;
  local_3c = DAT_0037f22c;
  local_50 = DAT_0037f22c;
  local_4c = DAT_0037f22c;
  local_48 = DAT_0037f22c;
  iVar7 = (int)*(short *)(param_1 + 0x1c);
  if (iVar7 == 0xc || iVar7 == 0xd) {
    FUN_00376340(DAT_0037f234,DAT_0037f230,DAT_0037f22c,param_2,param_1,0x1d);
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) ||
       (in_fpscr = in_fpscr & 0xfffffff |
                   (uint)(*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x84)) << 0x1e |
                   (uint)(*(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x2c)) << 0x1d,
       bVar1 = (byte)(in_fpscr >> 0x18), !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
      *(undefined1 *)(param_1 + 0x1d1) = 4;
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      *(undefined4 *)(param_1 + 0x70) = uVar2;
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
    if (((*(short *)(param_1 + 0x1c) == 0xd) && (*(int *)(param_1 + 0x124) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x124) + 0x13c) == 0)) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  else if (*(short *)(param_1 + 0x1d2) < 1) {
    switch(iVar7) {
    case 1:
    case 9:
    case 10:
    case 0xe:
      FUN_003642f4(param_2,param_1 + 0x28,&local_50,&local_50,
                   (int)(short)((short)(int)(*(float *)(param_1 + 0x58) * DAT_0037f238) * 0x28),7,
                   0xff,0xff,0xff,0xff,0,0xff,0,1,0xb,1);
      break;
    case 3:
    case 0xb:
      FUN_003642f4(param_2,param_1 + 0x28,&local_50,&local_50,
                   (int)(short)((short)(int)(*(float *)(param_1 + 0x58) * DAT_0037f238) * 0x28),7,
                   0xff,0xff,0xff,0xff,0,0,0xff,1,0xb,1);
      break;
    case 4:
      local_2c = (float)FUN_003738a8(DAT_0037f23c);
      local_2c = local_2c + *(float *)(param_1 + 0x28);
      fVar8 = (float)FUN_003738a8(uVar4);
      local_28 = fVar8 + *(float *)(param_1 + 0xc4) * *(float *)(param_1 + 0x58) +
                 *(float *)(param_1 + 0x2c);
      local_24 = (float)FUN_003738a8(uVar3);
      local_24 = local_24 + *(float *)(param_1 + 0x30);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    case 5:
    case 6:
    case 7:
    case 8:
      iVar7 = 4;
      do {
        local_2c = (float)FUN_003738a8(uVar5);
        local_2c = local_2c + *(float *)(param_1 + 0x28);
        local_28 = (float)FUN_003738a8(uVar6);
        local_28 = local_28 + *(float *)(param_1 + 0x2c);
        local_24 = (float)FUN_003738a8(uVar5);
        local_24 = local_24 + *(float *)(param_1 + 0x30);
        FUN_003642f4(param_2,&local_2c,&local_50,&local_50,0x28,7,0xff,0xff,0xff,0xff,0,0,0xff,1,0xb
                     ,1);
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
    FUN_00374428(param_1);
    return;
  }
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037f298 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x1d4) =
       *(float *)(param_1 + 0x1d4) + *(float *)(param_1 + 0x1d8) * fVar8 * DAT_0037f29c;
  *(short *)(param_1 + 0x1d2) = *(short *)(param_1 + 0x1d2) + -1;
  return;
}
