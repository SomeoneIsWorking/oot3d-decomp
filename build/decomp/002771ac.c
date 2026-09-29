// OoT3D decomp @ 002771ac  name=FUN_002771ac  size=400

void FUN_002771ac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  undefined4 auStack_9c [12];
  undefined1 auStack_6c [12];
  undefined1 auStack_60 [12];
  undefined1 auStack_54 [12];
  undefined1 auStack_48 [48];

  if (*(int *)(param_1 + 0x1bc) == DAT_0027733c) {
    FUN_0032d184(param_2,param_1,DAT_00277340,*(byte *)(param_1 + 0x1c0) + 0x1e,0x3c);
  }
  FUN_00372224(auStack_48,param_1 + 0x148);
  iVar4 = param_1 + *(short *)(param_1 + 0x1c) * 4;
  if (*(int *)(iVar4 + 0x300) != 0) {
    *(undefined1 *)(*(int *)(iVar4 + 0x300) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(iVar4 + 0x300),auStack_48);
    FUN_00372170(*(undefined4 *)(iVar4 + 0x300),0);
  }
  if (*(int *)(param_1 + 0x1bc) == DAT_00277344) {
    FUN_00372224(auStack_9c,param_1 + 0x148);
    iVar4 = DAT_00277348;
    FUN_003735ac(auStack_6c,auStack_9c,DAT_00277348 + 0x18);
    FUN_003735ac(auStack_60,auStack_9c,iVar4 + 0x24);
    FUN_003735ac(auStack_54,auStack_9c,iVar4 + 0x30);
    FUN_00362434(param_1 + 0x228,0,auStack_6c,auStack_60,auStack_54);
    FUN_003735ac(auStack_60,auStack_9c,iVar4 + 0x6c);
    FUN_00362434(param_1 + 0x228,1,auStack_6c,auStack_54,auStack_60);
  }
  uVar1 = DAT_00277358;
  auStack_9c[0] = DAT_00277354;
  uVar3 = *(uint *)(param_1 + 0x1bc);
  bVar5 = uVar3 == DAT_0027734c;
  if (bVar5) {
    uVar3 = (uint)*(byte *)(param_1 + 0x1c1);
  }
  if (bVar5 && uVar3 == 0) {
    fVar6 = *(float *)(param_1 + 0x2c) + DAT_00277350;
    *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(param_1 + 0x30);
    uVar2 = DAT_0027735c;
    *(float *)(param_1 + 0x1c8) = fVar6;
    *(undefined4 *)(param_1 + 0x1c4) = *(undefined4 *)(param_1 + 0x28);
    FUN_0037547c(uVar2,param_1 + 0x1c4,4,uVar1,uVar1);
  }
  return;
}
