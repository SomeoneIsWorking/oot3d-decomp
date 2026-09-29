// OoT3D decomp @ 0024dfe4  name=FUN_0024dfe4  size=300

void FUN_0024dfe4(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  short sVar3;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 uVar4;

  fVar1 = DAT_0024e258;
  uVar4 = DAT_0024e254;
  sVar3 = *(short *)(param_1 + 0x4a6) + -1;
  *(short *)(param_1 + 0x4a6) = sVar3;
  if (sVar3 < 1) {
    if (*(short *)(param_1 + 0x1c) == 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar3 = 0;
    do {
      iVar2 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                               *(undefined4 *)(param_1 + 0x30),uVar4,param_2 + 0x208c,param_2,0x35,0
                               ,0,0,10,1);
      uVar4 = extraout_s3;
      if (iVar2 != 0) {
        FUN_0037572c(*(float *)(param_1 + 0x5c) * fVar1,iVar2);
        *(undefined2 *)(DAT_0024e264 + iVar2) = *(undefined2 *)(param_1 + 0x4ac);
        uVar4 = extraout_s3_00;
      }
      sVar3 = sVar3 + 1;
    } while (sVar3 < 1);
    if (*(int *)(param_1 + 0x128) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x128) + 0x124) = 0;
      *(undefined2 *)(*(int *)(param_1 + 0x128) + 0x1c) = 0xb;
      *(undefined1 *)(*(int *)(param_1 + 0x128) + 0xb7) = 0;
    }
    *(undefined4 *)(param_1 + 0x1a8) = 2;
    FUN_00374428(param_1);
  }
  return;
}
