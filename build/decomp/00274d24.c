// OoT3D decomp @ 00274d24  name=FUN_00274d24  size=196

void FUN_00274d24(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_00274de8 + param_2);
  if ((*(short *)(param_2 + 0x2b7e) == 4) && (iVar1 = FUN_00366748(param_2), iVar1 == 0)) {
    if (*(short *)(param_1 + 0x232) == 0) {
      FUN_0035a008(param_2,(int)*(short *)(param_1 + 0x2ac));
      *(undefined2 *)(param_1 + 0x2ac) = 0xffff;
      uVar2 = DAT_00274df8;
    }
    else {
      FUN_003725e0(param_2);
      uVar2 = DAT_00274dec;
      *(short *)(DAT_00274df0 + param_1) = (short)DAT_00274dec;
      *(undefined2 *)(param_1 + 0x22e) = 5;
      FUN_00367c7c(param_2,uVar2,0);
      uVar2 = DAT_00274df4;
    }
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  else if (*(short *)(param_2 + 0x2b7e) == 1) {
    FUN_00345cb4(param_1,param_2,0);
    *(uint *)(iVar3 + 0x1714) = *(uint *)(iVar3 + 0x1714) | 0x800000;
    return;
  }
  return;
}
