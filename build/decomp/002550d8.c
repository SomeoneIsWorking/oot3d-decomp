// OoT3D decomp @ 002550d8  name=FUN_002550d8  size=252

void FUN_002550d8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;

  uVar1 = DAT_002551d8;
  iVar4 = *(int *)(DAT_002551d4 + param_2);
  if (iVar4 != 0) {
    iVar3 = *(int *)(DAT_002551dc + iVar4);
    bVar5 = iVar3 == param_1;
    if (bVar5) {
      iVar3 = *(int *)(iVar4 + 0x284);
    }
    if (bVar5 && iVar3 == 0x70) {
      *(float *)(param_1 + 0x204) = *(float *)(param_1 + 0x204) + *DAT_002551e0;
      fVar6 = (float)FUN_002cfca0((int)*(short *)(iVar4 + 0xbe));
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x204) * fVar6;
      fVar6 = (float)FUN_00338f60((int)*(short *)(iVar4 + 0xbe));
      uVar2 = DAT_002551e8;
      *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0x204) * fVar6;
      FUN_00376340(uVar2,DAT_002551e4,uVar1,param_2,param_1,1);
      if ((*(ushort *)(param_1 + 0x90) & 8) == 0) {
        *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(param_1 + 0x28);
        *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x30);
        goto LAB_0025519c;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x204) = uVar1;
LAB_0025519c:
  if (*(int *)(param_1 + 0x200) == 0) {
    return;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x200) + 0xac) = 1;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x200),param_1 + 0x148);
  FUN_00372170(*(undefined4 *)(param_1 + 0x200),0);
  return;
}
