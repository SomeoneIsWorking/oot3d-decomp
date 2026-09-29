// OoT3D decomp @ 002da114  name=FUN_002da114  size=388

int FUN_002da114(int param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;

  iVar7 = *(int *)(param_2 + 0x144);
  if ((*(int *)(param_3 + 0x20ac) != 0) &&
     (*(int *)(DAT_002da298 + *(int *)(param_3 + 0x20ac)) == param_2)) {
    FUN_00334354();
    sVar3 = FUN_0049f394(param_3);
    uVar4 = FUN_0036c5bc(param_3,(int)sVar3);
    FUN_00332284(uVar4,0);
  }
  if (*(int *)(param_1 + 0xa4) == param_2) {
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0x110) == param_2) {
    *(undefined4 *)(param_1 + 0x110) = 0;
  }
  if (*(int *)(param_1 + 0x114) == param_2) {
    *(undefined4 *)(param_1 + 0x114) = 0;
  }
  FUN_0049fa58(param_2 + 0x28);
  FUN_002d644c(param_2,param_3);
  *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -1;
  iVar5 = param_1 + (uint)*(byte *)(param_2 + 2) * 8;
  *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + -1;
  if (*(int *)(param_2 + 300) == 0) {
    *(undefined4 *)(param_1 + (uint)*(byte *)(param_2 + 2) * 8 + 0x10) =
         *(undefined4 *)(param_2 + 0x130);
  }
  else {
    *(undefined4 *)(*(int *)(param_2 + 300) + 0x130) = *(undefined4 *)(param_2 + 0x130);
  }
  iVar5 = *(int *)(param_2 + 0x130);
  if (iVar5 != 0) {
    *(undefined4 *)(iVar5 + 300) = *(undefined4 *)(param_2 + 300);
  }
  iVar2 = DAT_002da29c;
  *(undefined4 *)(param_2 + 0x130) = 0;
  *(undefined4 *)(param_2 + 300) = 0;
  uVar6 = (uint)*(char *)(param_2 + 3);
  bVar8 = uVar6 == (int)(char)*(byte *)(iVar2 + param_3);
  if (bVar8) {
    uVar6 = (uint)*(byte *)(param_2 + 2);
  }
  bVar9 = bVar8 && uVar6 == 5;
  if (bVar8 && uVar6 == 5) {
    bVar9 = *(int *)(param_1 + 0x34) == 0;
  }
  if (bVar9) {
    *(uint *)(param_3 + 0x2240) =
         *(uint *)(param_3 + 0x2240) | 1 << (uint)*(byte *)(iVar2 + param_3);
  }
  FUN_00350ef4(param_2);
  if ((((*(int *)(iVar7 + 8) != 0) &&
       (cVar1 = *(char *)(iVar7 + 0x1e) + -1, *(char *)(iVar7 + 0x1e) = cVar1, cVar1 == '\0')) &&
      (*(int *)(iVar7 + 0x10) != 0)) && ((*(ushort *)(iVar7 + 0x1c) & 2) == 0)) {
    if ((*(ushort *)(iVar7 + 0x1c) & 1) == 0) {
      FUN_00350ef4();
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
    else {
      *(undefined4 *)(iVar7 + 0x10) = 0;
    }
  }
  return iVar5;
}
