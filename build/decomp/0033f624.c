// OoT3D decomp @ 0033f624  name=FUN_0033f624  size=360

void FUN_0033f624(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  undefined1 auStack_48 [48];
  float local_18;
  float local_14;
  float local_10;

  FUN_0036963c(param_2,(int)(short)*(undefined4 *)(param_1 + 0xac8));
  FUN_00320d7c(param_2,0,7);
  *(undefined4 *)(param_1 + 0xac0) = 0;
  if ((~*(ushort *)(DAT_0033f78c + 0xfe) & 0xf) != 0) {
    FUN_0036e980(param_2,param_1,7);
    return;
  }
  if (((*DAT_0033f790 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_0033f790), puVar3 = DAT_0033f79c, uVar2 = DAT_0033f798,
     uVar1 = DAT_0033f794, iVar4 != 0)) {
    *DAT_0033f79c = DAT_0033f794;
    puVar3[1] = uVar1;
    puVar3[2] = uVar2;
  }
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(DAT_0033f7a0 + param_1),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar5 * DAT_0033f7a4,auStack_48,0);
  FUN_003735ac(&local_18,auStack_48,DAT_0033f79c);
  fVar5 = (float)FUN_003696ec(-local_18,-local_10);
  iVar4 = z_actor_003738d0(*(float *)(param_1 + 0xb38) + local_18,
                           *(float *)(param_1 + 0xb3c) + local_14,
                           *(float *)(param_1 + 0xb40) + local_10,param_2 + 0x208c,param_2,0x1d0,0,
                           (int)(short)(int)(fVar5 * DAT_0033f7a8),0,2,1);
  if (iVar4 == 0) {
    FUN_00374428(param_1);
  }
  return;
}
