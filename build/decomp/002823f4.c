// OoT3D decomp @ 002823f4  name=FUN_002823f4  size=892

void FUN_002823f4(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint in_fpscr;
  float fVar10;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  float local_34;
  float local_30;
  float local_2c;

  uVar4 = DAT_00282814;
  uVar3 = DAT_00282810;
  uVar8 = DAT_00282700;
  uVar6 = DAT_002826fc;
  uVar9 = DAT_002826f4;
  uVar7 = DAT_002826f0;
  uVar2 = DAT_002826ec;
  local_40 = DAT_002826ec;
  local_3c = DAT_002826ec;
  local_38 = DAT_002826ec;
  local_4c = DAT_002826ec;
  local_48 = DAT_002826ec;
  local_44 = DAT_002826ec;
  local_58 = DAT_002826ec;
  local_54 = DAT_002826ec;
  local_50 = DAT_002826ec;
  iVar5 = (int)*(short *)(param_1 + 0x1c);
  if (iVar5 == 0xc || iVar5 == 0xd) {
    uVar6 = *(undefined4 *)(param_3 + 0x34);
    uVar8 = *(undefined4 *)(param_3 + 0x38);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_3 + 0x30);
    *(undefined4 *)(param_1 + 0x2c) = uVar6;
    *(undefined4 *)(param_1 + 0x30) = uVar8;
    uVar6 = *(undefined4 *)(param_3 + 0x4c);
    uVar8 = *(undefined4 *)(param_3 + 0x50);
    *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_3 + 0x48);
    *(undefined4 *)(param_1 + 0x10c) = uVar6;
    *(undefined4 *)(param_1 + 0x110) = uVar8;
    FUN_00376340(uVar9,uVar7,uVar2,param_2,param_1,0x1d);
    uVar7 = *(undefined4 *)(param_1 + 0x2c);
    uVar9 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_3 + 0x30) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_3 + 0x34) = uVar7;
    *(undefined4 *)(param_3 + 0x38) = uVar9;
    if (((*(ushort *)(param_1 + 0x90) & 1) != 0) ||
       (in_fpscr = in_fpscr & 0xfffffff |
                   (uint)(*(float *)(param_1 + 0x2c) == *(float *)(param_1 + 0x84)) << 0x1e |
                   (uint)(*(float *)(param_1 + 0x84) <= *(float *)(param_1 + 0x2c)) << 0x1d,
       bVar1 = (byte)(in_fpscr >> 0x18), !(bool)(bVar1 >> 5 & 1) || (bool)(bVar1 >> 6))) {
      *(undefined2 *)(param_3 + 0x78) = 4;
      *(undefined4 *)(param_3 + 0x6c) = uVar2;
      *(undefined4 *)(param_3 + 0x68) = uVar2;
      *(undefined4 *)(param_3 + 0x60) = uVar2;
    }
    if (((*(short *)(param_1 + 0x1c) == 0xd) && (*(int *)(param_1 + 0x124) != 0)) &&
       (*(int *)(*(int *)(param_1 + 0x124) + 0x13c) == 0)) {
      *(undefined4 *)(param_1 + 0x124) = 0;
    }
  }
  else if (*(short *)(param_3 + 0x7a) < 1) {
    switch(iVar5) {
    case 1:
    case 9:
    case 10:
    case 0xe:
      FUN_003642f4(param_2,param_3 + 0x30,&local_58,&local_58,
                   (int)(short)((short)(int)(*(float *)(param_1 + 0x58) * DAT_002826f8) * 0x28),7,
                   0xff,0xff,0xff,0xff,0,0xff,0,1,0xb,1);
      break;
    case 3:
    case 0xb:
      if (*(short *)(param_3 + 0x7c) != 4 && *(short *)(param_3 + 0x7c) != 6) {
        FUN_003642f4(param_2,param_3 + 0x30,&local_58,&local_58,
                     (int)(short)((short)(int)(*(float *)(param_1 + 0x58) * DAT_002826f8) * 0x28),7,
                     0xff,0xff,0xff,0xff,0,0,0xff,1,0xb,1);
      }
      break;
    case 4:
      local_34 = (float)FUN_003738a8(DAT_002826fc);
      local_34 = local_34 + *(float *)(param_3 + 0x30);
      local_30 = (float)FUN_003738a8(uVar8);
      local_30 = local_30 + *(float *)(param_3 + 0x34);
      local_2c = (float)FUN_003738a8(uVar6);
      local_2c = local_2c + *(float *)(param_3 + 0x38);
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    case 5:
    case 6:
    case 7:
    case 8:
      iVar5 = 4;
      do {
        local_34 = (float)FUN_003738a8(uVar3);
        local_34 = local_34 + *(float *)(param_3 + 0x30);
        local_30 = (float)FUN_003738a8(uVar4);
        local_30 = local_30 + *(float *)(param_3 + 0x34);
        local_2c = (float)FUN_003738a8(uVar3);
        local_2c = local_2c + *(float *)(param_3 + 0x38);
        FUN_003642f4(param_2,&local_34,&local_58,&local_58,0x28,7,0xff,0xff,0xff,0xff,0,0,0xff,1,0xb
                     ,1);
        iVar5 = iVar5 + -1;
      } while (-1 < iVar5);
    }
    *(undefined2 *)(param_3 + 0x78) = 5;
    return;
  }
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00282818 + 0x110),
                                      (byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_3 + 0x74) =
       *(float *)(param_3 + 0x74) + *(float *)(param_3 + 0x70) * fVar10 * DAT_0028281c;
  *(short *)(param_3 + 0x7a) = *(short *)(param_3 + 0x7a) + -1;
  return;
}
