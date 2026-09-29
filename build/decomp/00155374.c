// OoT3D decomp @ 00155374  name=FUN_00155374  size=156

void FUN_00155374(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = FUN_0036e168(*(float *)(param_1 + 0xc) + fRam00155410,uRam0015541c,uRam00155418,
                       uRam00155414,param_1 + 0x2c);
  if (iVar3 < iRam00155420) {
    FUN_00375bcc(param_1,uRam00155424);
    *(undefined4 *)(param_1 + 0x1bc) = uRam00155428;
    *(undefined2 *)(param_1 + 0x1c2) = 0x2d;
    *(undefined4 *)(param_1 + 0x21c) = 3;
    return;
  }
  if ((*(short *)(param_1 + 0x1c2) == 0) ||
     (sVar1 = *(short *)(param_1 + 0x1c2) + -1, *(short *)(param_1 + 0x1c2) = sVar1, sVar1 == 0)) {
    *(undefined2 *)(param_1 + 0x1c2) = 0x11;
  }
  uVar2 = uRam0015542c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xefc7ffff;
  *(undefined4 *)(param_1 + 0x24) = uVar2;
  return;
}
