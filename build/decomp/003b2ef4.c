// OoT3D decomp @ 003b2ef4  name=FUN_003b2ef4  size=320

void FUN_003b2ef4(int param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  float fVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;

  FUN_003731e0(param_1 + 0x214);
  fVar3 = DAT_003b3044;
  psVar2 = DAT_003b303c;
  fVar8 = DAT_003b3038;
  iVar5 = (int)*(short *)(*DAT_003b3034 + 0x110);
  fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(DAT_003b303c + 2) = *(float *)(DAT_003b303c + 2) + fVar6 * DAT_003b3038 * DAT_003b3040;
  fVar6 = DAT_003b3048;
  fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
  *psVar2 = (short)(int)(DAT_003b3048 + fVar7 * fVar8 * fVar3 + fVar9);
  sVar1 = *(short *)(param_1 + 0x3dc);
  if (sVar1 == 8) {
    FUN_00375c44(param_2,param_1 + 0x28,0x3c,DAT_003b304c);
    return;
  }
  if (sVar1 == 6) {
    z_actor_003738d0(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x40),
                     *(undefined4 *)(param_1 + 0x44),param_2 + 0x208c,param_2,0x18,0,
                     (int)*(short *)(param_1 + 0xbe),0,2,1);
    *(undefined1 *)(param_1 + 0x3e0) = 0;
  }
  else if (sVar1 < 1) {
    fVar8 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x3dc) = (short)(int)(fVar6 + (DAT_003b3050 / fVar8) * DAT_003b3054);
    uVar4 = DAT_003b3058;
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x3d8) = uVar4;
    return;
  }
  return;
}
