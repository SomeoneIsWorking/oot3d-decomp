// OoT3D decomp @ 003592d8  name=FUN_003592d8  size=244

undefined4
FUN_003592d8(float param_1,int param_2,undefined4 param_3,undefined2 param_4,uint param_5)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;

  iVar2 = FUN_0036bc98();
  if (iVar2 == 0) {
    uVar4 = DAT_00359418;
    if ((param_5 & 2) != 0) {
      uVar4 = DAT_0035941c;
    }
    *(undefined2 *)(DAT_00359414 + param_2) = param_4;
    if (*(float *)(param_2 + 0x98) < param_1) {
      *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x10000;
      FUN_00359220(param_1,uVar4,param_2,param_3,0);
    }
    return 0;
  }
  if (*(short *)(param_2 + 0x1c) == 0xfff) {
    *(ushort *)(param_2 + 0x135c) = *(ushort *)(param_2 + 0x135c) | 0x40;
    uVar3 = DAT_0035940c;
    if (*(int *)(DAT_00359410 + param_2) == 10) {
      uVar3 = DAT_0035940c | (int)DAT_0035940c >> 8;
    }
    uVar1 = FUN_00371808(param_3,(int)(short)uVar3,0xffffff9c,param_2,0);
    *(undefined2 *)(param_2 + 0x1362) = uVar1;
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
