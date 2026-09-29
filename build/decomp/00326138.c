// OoT3D decomp @ 00326138  name=FUN_00326138  size=164

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00326138(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;

  if (((-1 < *(short *)(param_1 + 0x1c)) &&
      (iVar2 = FUN_0035e600(DAT_00326294,param_1,param_2,
                            (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar2 == 0)) &&
     (iVar2 = FUN_0035e600(DAT_00326298,param_1,param_2,
                           (int)(short)(*(short *)(param_1 + 0xbe) + 0x3fff)), iVar2 == 0)) {
    FUN_00370350(DAT_0032fbb4,param_1 + 0x1a4,0);
    *(undefined4 *)(param_1 + 0xa48) = 5;
    if (-1 < *(short *)(param_1 + 0x1c)) {
      uVar3 = FUN_00373fa4(param_1 + 0x28,(int)*(short *)(param_1 + 0xa6a));
      *(short *)(param_1 + 0xa6a) = (short)uVar3;
      uVar1 = FUN_003262b8(param_1 + 0x28,uVar3,(int)*(short *)(param_1 + 0xa6c),param_2);
      *(undefined2 *)(param_1 + 0xa6e) = uVar1;
      *(undefined4 *)(param_1 + 0xa50) = 0;
    }
    uVar3 = DAT_0032fbbc;
    *(undefined4 *)(param_1 + 0x6c) = DAT_0032fbb8;
    *(undefined4 *)(param_1 + 0xa54) = uVar3;
    return;
  }
  FUN_0036e734(param_1 + 0x1a4,0xc);
  uVar3 = FUN_003738a8(DAT_0032629c);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
