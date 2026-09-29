// OoT3D decomp @ 00452220  name=FUN_00452220  size=164

void FUN_00452220(int param_1)

{
  short *psVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  if (*(char *)(param_1 + 0x5c03) != '\0') {
    iVar2 = 0;
    psVar1 = *(short **)(param_1 + 0x5c10);
    do {
      uVar5 = VectorSignedToFloat((int)psVar1[3],(byte)(in_fpscr >> 0x15) & 3);
      uVar4 = VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
      uVar3 = VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
      z_actor_003738d0(uVar3,uVar4,uVar5,param_1 + 0x208c,param_1,(int)*psVar1,(int)psVar1[4],
                       (int)psVar1[5],(int)psVar1[6],(int)psVar1[7],0);
      iVar2 = iVar2 + 1;
      psVar1 = psVar1 + 8;
    } while (iVar2 < (int)(uint)*(byte *)(param_1 + 0x5c03));
    *(undefined1 *)(param_1 + 0x5c03) = 0;
  }
  return;
}
