// OoT3D decomp @ 003df554  name=FUN_003df554  size=256

void FUN_003df554(int param_1,int param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;

  psVar1 = psRam003df654;
  iVar3 = (int)*(short *)(param_1 + 0x1c2);
  iVar4 = (int)*psRam003df654;
  bVar6 = SBORROW4(iVar3,iVar4);
  iVar5 = iVar3 - iVar4;
  if (iVar3 < iVar4) {
    bVar6 = SBORROW4(iVar4,5);
    iVar5 = iVar4 + -5;
  }
  if (iVar5 < 0 != bVar6) {
    FUN_0035e5b4(0,uRam003df65c,(int)(char)*(undefined4 *)(iRam003df658 + iVar3 * 4));
    *(short *)(param_1 + 0x1c2) = *psVar1;
  }
  iVar5 = (int)*psVar1;
  if (iVar5 < *(short *)(param_1 + 0x1aa)) {
    return;
  }
  uVar2 = *(ushort *)(param_2 + 0x104);
  if (uVar2 == 0xb) {
    iVar5 = (int)*(char *)(param_1 + 3);
  }
  if (uVar2 == 0xb && iVar5 == 2) {
    FUN_00353524(param_2);
    goto FUN_00374428;
  }
  if (*(char *)(iRam003df660 + 0xe) == '\0') {
LAB_003df5fc:
    FUN_00372244(param_2 + 0x5fcc,0x1e,uRam003df664);
  }
  else {
    bVar6 = uVar2 == 1;
    if (bVar6) {
      uVar2 = (ushort)*(byte *)(param_1 + 3);
    }
    if (!bVar6 || uVar2 != 2) goto LAB_003df5fc;
  }
  FUN_00375c10(param_2,(int)*(short *)(param_1 + 0x1ac));
FUN_00374428:
  FUN_0037547c(uRam003df670,0,4,uRam003df66c,uRam003df66c,uRam003df668);
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
