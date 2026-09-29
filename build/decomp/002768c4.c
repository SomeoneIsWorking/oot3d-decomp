// OoT3D decomp @ 002768c4  name=FUN_002768c4  size=188

void FUN_002768c4(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [12];

  if (*(int *)(param_1 + 0x1c0) != 0) {
    FUN_003721e0(*(int *)(param_1 + 0x1c0),param_1 + 0x148);
    *(undefined1 *)(*(int *)(param_1 + 0x1c0) + 0xac) = 1;
    FUN_00372170(*(undefined4 *)(param_1 + 0x1c0),0);
    if (-1 < *(char *)(param_1 + 0x244)) {
      iVar3 = 0;
      iVar1 = DAT_00276980 + *(char *)(param_1 + 0x244) * 0x30;
      puVar2 = auStack_48;
      do {
        FUN_003735ac(puVar2,param_1 + 0x148,iVar1);
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0xc;
        puVar2 = puVar2 + 0xc;
      } while (iVar3 < 4);
      FUN_0035479c(param_1 + 0x1c4,auStack_48,auStack_3c,auStack_30,auStack_24);
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1c4);
    }
  }
  return;
}
