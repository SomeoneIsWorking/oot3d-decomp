// OoT3D decomp @ 00234044  name=FUN_00234044  size=324

void FUN_00234044(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 auStack_48 [48];

  iVar5 = DAT_0023418c;
  uVar1 = DAT_00234188;
  if (param_2 == 3) {
    if (((*(uint *)(DAT_0023418c + 8) & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_0023418c + 8), puVar3 = DAT_00234194, uVar2 = DAT_00234190,
       iVar4 != 0)) {
      *DAT_00234194 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = uVar2;
    }
    if (((*(uint *)(iVar5 + 4) & 1) == 0) &&
       (iVar5 = FUN_003679b4(DAT_00234198), puVar3 = DAT_002341a0, uVar2 = DAT_0023419c, iVar5 != 0)
       ) {
      *DAT_002341a0 = uVar1;
      puVar3[1] = uVar1;
      puVar3[2] = uVar2;
    }
    FUN_003735ac(param_4 + 0x648,param_3,DAT_00234194);
    FUN_003735ac(param_4 + 0x654,param_3,DAT_002341a0);
    return;
  }
  if ((param_2 == 1) && (*(short *)(param_4 + 0x1c) < 1)) {
    FUN_00372224(auStack_48,param_3);
    local_54 = DAT_002341a4;
    local_50 = uVar1;
    local_4c = uVar1;
    FUN_00372070(auStack_48,auStack_48,&local_54);
    FUN_00357750(0,param_4 + 0x6e4,auStack_48);
  }
  return;
}
