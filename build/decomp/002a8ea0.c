// OoT3D decomp @ 002a8ea0  name=FUN_002a8ea0  size=324

undefined4 FUN_002a8ea0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint in_fpscr;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  fVar5 = DAT_002a8ffc;
  switch(param_2) {
  case 0x13:
  case 0x15:
    fVar3 = *(float *)(param_4 + 0xe88);
    fVar6 = *(float *)(param_4 + 0xe90);
    fVar4 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_4 + 0xe8c),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar4 * DAT_002a8ffc,param_3,1);
    fVar3 = (float)VectorSignedToFloat((int)(short)(int)(fVar3 + fVar6),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar3 * fVar5,param_3,1);
    break;
  case 0x14:
    fVar5 = *(float *)(param_4 + 0xe8c);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar5 < DAT_002a9000) << 0x1f |
            (uint)(fVar5 == DAT_002a9000) << 0x1e;
    bVar1 = (byte)(uVar2 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar5) || NAN(DAT_002a9000))) {
      return 0;
    }
    goto LAB_002a8fcc;
  case 0x16:
  case 0x18:
    fVar3 = *(float *)(param_4 + 0xe88);
    fVar6 = *(float *)(param_4 + 0xe90);
    fVar4 = (float)VectorSignedToFloat((int)(short)(int)*(float *)(param_4 + 0xe8c),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_00371234(fVar4 * DAT_002a8ffc,param_3,1);
    fVar3 = (float)VectorSignedToFloat((int)(short)(int)(fVar3 - fVar6),(byte)(in_fpscr >> 0x15) & 3
                                      );
    FUN_003735e8(fVar3 * fVar5,param_3,1);
    break;
  case 0x17:
    fVar5 = *(float *)(param_4 + 0xe8c);
    uVar2 = in_fpscr & 0xfffffff | (uint)(fVar5 < DAT_002a9000) << 0x1f |
            (uint)(fVar5 == DAT_002a9000) << 0x1e;
    bVar1 = (byte)(uVar2 >> 0x18);
    if ((bool)(bVar1 >> 6 & 1) || (bool)(bVar1 >> 7) != (NAN(fVar5) || NAN(DAT_002a9000))) {
      return 0;
    }
LAB_002a8fcc:
    fVar5 = (float)VectorSignedToFloat((int)(short)(int)fVar5,(byte)(uVar2 >> 0x15) & 3);
    FUN_00371234(fVar5 * DAT_002a8ffc,param_3,1);
  }
  return 0;
}
