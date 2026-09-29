// OoT3D decomp @ 0040e030  name=FUN_0040e030  size=144

undefined4 FUN_0040e030(int param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  piVar1 = (int *)FUN_0030432c(*(undefined4 *)(param_1 + 4));
  if (*piVar1 <= param_3) {
    return 0;
  }
  puVar2 = (undefined1 *)FUN_0040db1c(piVar1,param_3);
  *param_2 = *puVar2;
  param_2[1] = puVar2[1];
  uVar5 = *(uint *)(puVar2 + *(int *)(puVar2 + 8)) & 0xff;
  param_2[2] = (char)*(uint *)(puVar2 + *(int *)(puVar2 + 8));
  if (2 < uVar5) {
    uVar5 = 2;
  }
  uVar3 = 0;
  if (uVar5 != 0) {
    do {
      uVar4 = uVar3 + 1;
      param_2[uVar3 + 3] = puVar2[uVar3 + *(int *)(puVar2 + 8) + 4];
      uVar3 = uVar4;
    } while (uVar4 < uVar5);
  }
  return 1;
}
