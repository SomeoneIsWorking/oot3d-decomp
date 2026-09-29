// OoT3D decomp @ 001cdc58  name=FUN_001cdc58  size=124

void FUN_001cdc58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;

  FUN_00376864();
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(*DAT_001cddbc + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x6c) =
       *(float *)(param_1 + 0x6c) + *(float *)(param_1 + 0x70) * DAT_001cddb8 * fVar3 * DAT_001cddc0
  ;
  if (*(char *)(param_1 + 0x289) == '\0') {
    iVar1 = param_2 + 0x208c;
    iVar2 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),iVar1,param_2,0x8b,0,0,0,2,1);
    if (iVar2 != 0) {
      FUN_0037572c(uRam001cddc4);
    }
    iVar2 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),iVar1,param_2,0x8b,0,0,0,7,1);
    if (iVar2 != 0) {
      FUN_0037572c(uRam001cddc8);
    }
    iVar1 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                             *(undefined4 *)(param_1 + 0x30),iVar1,param_2,0x8b,0,0,0,0x10,1);
    if (iVar1 != 0) {
      FUN_0037572c(uRam001cddcc);
    }
    FUN_0037547c(uRam001cddd8,0,4,uRam001cddd4,uRam001cddd4,uRam001cddd0);
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(undefined4 *)(param_1 + 0x13c) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    return;
  }
  *(char *)(param_1 + 0x289) = *(char *)(param_1 + 0x289) + -1;
  return;
}
