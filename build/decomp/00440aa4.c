// OoT3D decomp @ 00440aa4  name=FUN_00440aa4  size=648

void FUN_00440aa4(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;

  uVar6 = DAT_00440d3c;
  uVar5 = DAT_00440d38;
  uVar4 = DAT_00440d34;
  uVar3 = DAT_00440d30;
  uVar2 = DAT_00440d2c;
  if (param_1[0x26b] != 0) {
    if (*(int *)(param_1[0x26b] + 0x18) < 1) {
      FUN_002e75d0(param_1);
      param_1[0x26b] = 0;
    }
    goto LAB_00440cf4;
  }
  iVar9 = param_1[0x266];
  if (*(int *)(iVar9 + 0x14) == 3) {
    cVar1 = *(char *)((int)param_1 + 7);
joined_r0x00440ae0:
    if (cVar1 == '\0') {
      *(undefined1 *)((int)param_1 + 7) = 1;
      FUN_0037547c(uVar2,0,4,uVar4,uVar4,uVar3);
    }
    pcVar8 = *(code **)(*(int *)param_1[0x26a] + 0x10);
  }
  else {
    iVar10 = param_1[0x267];
    if (*(int *)(iVar10 + 0x14) != 3) {
      if (*(char *)(iVar9 + 0x1c) == '\0') {
        if (*(char *)(iVar10 + 0x1c) == '\0') {
          uVar7 = *(uint *)(*param_1 + 0x18);
          if ((uVar7 & 0x10) != 0 || (uVar7 & 0x10000000) != 0) {
            cVar1 = *(char *)((int)param_1 + 7);
            goto joined_r0x00440ae0;
          }
          if ((uVar7 & 0x20) == 0 && (uVar7 & 0x20000000) == 0) {
            if ((uVar7 & 9) != 0) {
              if (*(char *)((int)param_1 + 7) == '\x01') {
                param_1[0x26b] = iVar9;
                uVar6 = uVar5;
              }
              else {
                param_1[0x26b] = iVar10;
              }
              FUN_0037547c(uVar6,0,4,DAT_00440d34,DAT_00440d34,DAT_00440d30);
              uVar2 = DAT_00440d44;
              iVar9 = param_1[0x26b];
              *(float *)(*(int *)(iVar9 + 4) + 4) =
                   *(float *)(*(int *)(iVar9 + 4) + 4) + DAT_00440d40;
              uVar3 = DAT_00440d48;
              *(undefined4 *)(*(int *)(iVar9 + 4) + 0x34) = uVar2;
              *(undefined4 *)(*(int *)(iVar9 + 4) + 0x30) = uVar2;
              *(undefined4 *)(*(int *)(iVar9 + 4) + 0x2c) = uVar2;
              **(undefined4 **)(iVar9 + 8) = **(undefined4 **)(iVar9 + 4);
              *(undefined4 *)(*(int *)(iVar9 + 8) + 0x38) = uVar3;
              *(undefined4 *)(iVar9 + 0x14) = 1;
              *(undefined4 *)(iVar9 + 0x18) = 6;
            }
            goto LAB_00440cf4;
          }
          cVar1 = *(char *)((int)param_1 + 7);
          goto joined_r0x00440c10;
        }
        param_1[0x26b] = iVar10;
      }
      else {
        param_1[0x26b] = iVar9;
        uVar6 = uVar5;
      }
      FUN_0037547c(uVar6,0,4,DAT_00440d34,DAT_00440d34,DAT_00440d30);
      goto LAB_00440cf4;
    }
    cVar1 = *(char *)((int)param_1 + 7);
joined_r0x00440c10:
    if (cVar1 == '\x01') {
      *(undefined1 *)((int)param_1 + 7) = 0;
      FUN_0037547c(uVar2,0,4,uVar4,uVar4,uVar3);
    }
    pcVar8 = *(code **)(*(int *)param_1[0x26a] + 0x14);
  }
  (*pcVar8)();
LAB_00440cf4:
  (**(code **)(*(int *)param_1[0x267] + 8))();
  (**(code **)(*(int *)param_1[0x266] + 8))();
                    /* WARNING: Could not recover jumptable at 0x00440d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)param_1[0x26a] + 8))();
  return;
}
