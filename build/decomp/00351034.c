// OoT3D decomp @ 00351034  name=FUN_00351034  size=124

void FUN_00351034(int param_1,int param_2,uint param_3)

{
  ushort uVar1;
  int iVar2;

  if (param_3 < 0x32) {
    uVar1 = *(ushort *)(param_1 + 0xa98 + param_3 * 2 + 0x156c);
    if (((uVar1 & 1) == 0) || ((uVar1 & 2) != 0)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xa98 + param_3 * 0x6c + 0x54);
    }
    if (iVar2 != 0) {
      *(undefined4 *)(iVar2 + 0x1a4) = 0xffffffff;
      *(undefined4 *)(param_2 + param_3 * 0x6c + 4) = 0;
      param_2 = param_2 + param_3 * 2;
      *(ushort *)(param_2 + 0x151c) = *(ushort *)(param_2 + 0x151c) | 2;
    }
    return;
  }
  return;
}
