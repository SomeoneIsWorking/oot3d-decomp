// OoT3D decomp @ 00118878  name=FUN_00118878  size=220

void FUN_00118878(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;

  iVar2 = FUN_00373074(param_2 + 0x3a58,*(undefined1 *)(param_1 + 0x16b0));
  iVar4 = DAT_00118954;
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x16b1) = 1;
    uVar1 = DAT_0011895c;
    *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(iVar4 + param_1);
    *(undefined4 *)(param_1 + 0x16b4) = DAT_00118958;
    iVar4 = 0;
    do {
      iVar2 = param_1 + iVar4 * 4;
      uVar3 = FUN_00372f38(param_1,param_2,iVar2 + 0x16cc,6,0);
      FUN_0047d548(*(undefined4 *)(iVar2 + 0x16cc),2);
      uVar5 = *(undefined4 *)(*(int *)(iVar2 + 0x16cc) + 0xc);
      uVar3 = FUN_00372f0c(uVar3,iVar4 + 9);
      FUN_00372d94(uVar5,uVar3);
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x16cc) + 0xc) + 0xc) = uVar1;
      *(undefined1 *)(*(int *)(*(int *)(iVar2 + 0x16cc) + 0xc) + 0x10) = 1;
    } while (iVar4 < 6);
  }
  return;
}
