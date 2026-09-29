// OoT3D decomp @ 004c7b9c  name=FUN_004c7b9c  size=156

void FUN_004c7b9c(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 auStack_144 [192];
  undefined1 local_84 [108];

  FUN_00371738(local_84,DAT_004c7c38,0x6c);
  FUN_00371738(auStack_144,DAT_004c7c3c,0xc0);
  uVar1 = 0;
  if (*(int *)(DAT_004c7c40 + 4) == 0) {
    uVar2 = 0x30;
    puVar3 = auStack_144;
  }
  else {
    uVar2 = 0x1b;
    puVar3 = local_84;
  }
  if (uVar2 != 0) {
    do {
      if (*(int *)(puVar3 + uVar1 * 4) != -1) {
        if (param_2 == 0) {
          FUN_0036932c(*(undefined4 *)(param_1 + 0x27c));
        }
        else {
          FUN_0037266c();
        }
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  return;
}
