// OoT3D decomp @ 001dc610  name=FUN_001dc610  size=336

void FUN_001dc610(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  bool bVar7;

  iVar2 = DAT_001dc760;
  uVar4 = (uint)*(ushort *)(param_1 + 0x1c);
  bVar7 = uVar4 == 6;
  if (bVar7) {
    uVar4 = *(uint *)(DAT_001dc760 + 4);
  }
  if (bVar7 && uVar4 == 0) {
    *(undefined2 *)(param_1 + 0x1c) = 9;
  }
  *(undefined4 *)(param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x388) = 0;
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x390) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3a4) = 0;
  iVar5 = (int)*(short *)(param_1 + 0x1c);
  if (iVar5 == 10) {
    uVar1 = *(ushort *)(DAT_001dc764 + 0x1e) & 0x40;
joined_r0x001dc6b0:
    if (uVar1 == 0) goto LAB_001dc754;
  }
  else if (iVar5 == 1) {
    if (*(int *)(iVar2 + 4) != 0) goto LAB_001dc754;
  }
  else if (iVar5 == 2) {
    uVar1 = *(ushort *)(DAT_001dc768 + 0xf0) & 0x20;
    goto joined_r0x001dc6b0;
  }
  psVar6 = (short *)(DAT_001dc76c + iVar5 * 6);
  param_2 = param_2 + 0x3a58;
  cVar3 = FUN_00363c10(param_2,(int)*psVar6);
  *(char *)(param_1 + 0x28c) = cVar3;
  iVar2 = DAT_001dc770;
  if (cVar3 < '\0') {
LAB_001dc754:
    FUN_00374428(param_1);
    return;
  }
  if (psVar6[1] == DAT_001dc770) {
    *(undefined1 *)(param_1 + 0x28d) = 0xff;
  }
  else {
    cVar3 = FUN_00363c10(param_2);
    *(char *)(param_1 + 0x28d) = cVar3;
    if (cVar3 < '\0') goto LAB_001dc754;
  }
  if (psVar6[2] == iVar2) {
    *(undefined1 *)(param_1 + 0x28e) = 0xff;
  }
  else {
    cVar3 = FUN_00363c10(param_2);
    *(char *)(param_1 + 0x28e) = cVar3;
    if (cVar3 < '\0') goto LAB_001dc754;
  }
  FUN_003510b0(param_1,DAT_001dc774);
  *(undefined4 *)(param_1 + 0x228) = DAT_001dc778;
  return;
}
