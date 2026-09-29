// OoT3D decomp @ 00258cd4  name=FUN_00258cd4  size=472

void FUN_00258cd4(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar5 = 0;
  iVar1 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1d4));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1d4);
    FUN_003532e8(param_1,1);
    switch(*(ushort *)(param_1 + 0x1c) & 7) {
    case 0:
    case 1:
    case 2:
      FUN_00372f38(param_1,param_2,param_1 + 0x1d8,3,param_1 + 0x1dc,1,param_1 + 0x1e0,4,0,uVar5);
      break;
    case 3:
      FUN_00372f38(param_1,param_2,param_1 + 0x1e4,0,0);
      uVar5 = FUN_00353fd4(param_1,param_2,0);
      uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar5);
      *(undefined4 *)(param_1 + 0x1a4) = uVar5;
      if (*(int *)(DAT_00258ec0 + 0x10) == 0) {
        psVar2 = *(short **)
                  (*(int *)(DAT_00258ec4 + param_2) + ((*(ushort *)(param_1 + 0x1c) & 0xff00) >> 5)
                  + 4);
        uVar5 = VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
        uVar3 = VectorSignedToFloat((int)psVar2[1],(byte)(in_fpscr >> 0x15) & 3);
        uVar4 = VectorSignedToFloat((int)psVar2[2],(byte)(in_fpscr >> 0x15) & 3);
        FUN_0036aa20(uVar5,uVar3,uVar4,param_2 + 0x208c,param_1,param_2,0x1bc,
                     (int)*(short *)(param_1 + 0x34),(int)*(short *)(param_1 + 0x36),
                     (int)*(short *)(param_1 + 0x38),
                     (int)(short)((*(ushort *)(param_1 + 0x1c) & 0xff00) + 1));
      }
      break;
    case 4:
      FUN_00372f38(param_1,param_2,param_1 + 0x1e8,0,0);
      uVar5 = FUN_00353fd4(param_1,param_2,0);
      uVar5 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar5);
      *(undefined4 *)(param_1 + 0x1a4) = uVar5;
    }
    *(undefined4 *)(param_1 + 0x140) = DAT_00258ec8;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00258ecc;
  }
  return;
}
