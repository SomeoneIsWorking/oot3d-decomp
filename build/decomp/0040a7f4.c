// OoT3D decomp @ 0040a7f4  name=FUN_0040a7f4  size=308

undefined4 FUN_0040a7f4(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;

  iVar4 = DAT_0040a92c;
  puVar1 = DAT_0040a928;
  iVar2 = param_2;
  if (param_2 - 0xb5U < 9) {
    if (((*DAT_0040a928 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0040a928), iVar2 != 0)) {
      FUN_0036788c(iVar4 + -0x32c0);
    }
    param_2 = 0xb5;
    iVar2 = *(int *)(iVar4 + 0xf3c) + 0xb5;
  }
  iVar3 = iVar2;
  if (iVar2 - 0xb5U < 9) {
    if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_0040a928,iVar2), iVar3 != 0)) {
      FUN_0036788c(DAT_0040a938);
    }
    iVar3 = *(int *)(iVar4 + 0xf3c) + 0xb5;
  }
  iVar4 = FUN_003066dc(param_1 + 8,iVar3);
  if (iVar4 != 0) {
    iVar4 = param_1 + param_2 * 0x10;
    uVar5 = *(uint *)(iVar4 + 0x40);
    if ((uVar5 & 5) != 0 || param_3 != 0) {
      *(uint *)(iVar4 + 0x40) = uVar5 | 2;
      if ((uVar5 & 4) == 0) {
        *(uint *)(iVar4 + 0x40) = uVar5 & 0xfffffff7 | 2;
      }
      FUN_0040a674(param_1 + 8,iVar2);
      *(undefined4 *)(DAT_0040a93c + param_1) = 0;
      FUN_0030661c(param_1);
      return 1;
    }
  }
  return 0;
}
