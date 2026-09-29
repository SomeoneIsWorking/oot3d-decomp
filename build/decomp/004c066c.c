// OoT3D decomp @ 004c066c  name=FUN_004c066c  size=476

void FUN_004c066c(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;

  if ((char)param_1[1] == '\0') {
    iVar2 = *param_1;
    param_1[3] = *(int *)(iVar2 + 0x1c) + iVar2;
    param_1[2] = *(int *)(iVar2 + 0x18) + iVar2;
    if (0 < *(int *)(iVar2 + 0x10)) {
      iVar2 = iVar2 + *(int *)(iVar2 + 0x14);
      iVar4 = *(int *)(iVar2 + 0x10);
      if (iVar4 != 0) {
        iVar2 = iVar2 + iVar4;
        iVar4 = *(int *)(iVar2 + 4);
        param_1[4] = iVar4;
        puVar7 = DAT_004c0848;
        if (0 < iVar4) {
          iVar4 = (**(code **)(*(int *)*DAT_004c0848 + 8))((int *)*DAT_004c0848,iVar4 << 2);
          param_1[5] = iVar4;
          iVar4 = (**(code **)(*(int *)*puVar7 + 8))((int *)*puVar7,param_1[4] << 2);
          param_1[6] = iVar4;
          FUN_002deb7c(param_1[4],param_1[5]);
          uVar1 = DAT_004c084c;
          iVar4 = 0;
          if (0 < param_1[4]) {
            do {
              if (iVar4 < *(int *)(iVar2 + 4)) {
                puVar7 = (undefined4 *)(iVar2 + 8 + iVar4 * 0x18);
              }
              if (*(int *)(iVar2 + 4) <= iVar4) {
                puVar7 = (undefined4 *)0x0;
              }
              FUN_002fb074(uVar1,*(undefined4 *)(param_1[5] + iVar4 * 4));
              uVar3 = (uint)*(byte *)((int)puVar7 + 6);
              if (uVar3 == 0) {
                iVar5 = 0;
                iVar6 = extraout_r1;
                if (puVar7 != (undefined4 *)0x0) {
                  iVar5 = param_1[3];
                  iVar6 = puVar7[4];
                }
                if (puVar7 != (undefined4 *)0x0) {
                  iVar5 = iVar5 + iVar6;
                }
                else {
                  iVar5 = 0;
                }
                FUN_002de990(uVar1,-(int)*(short *)(puVar7 + 1),*(undefined2 *)(puVar7 + 3),
                             (int)*(short *)(puVar7 + 2),(int)*(short *)((int)puVar7 + 10),0,
                             *(undefined2 *)(puVar7 + 3),*(undefined2 *)((int)puVar7 + 0xe),iVar5);
              }
              else {
                iVar5 = extraout_r1;
                if (puVar7 != (undefined4 *)0x0) {
                  uVar3 = param_1[3];
                  iVar5 = puVar7[4];
                }
                if (puVar7 != (undefined4 *)0x0) {
                  iVar5 = uVar3 + iVar5;
                }
                else {
                  iVar5 = 0;
                }
                FUN_002d2ba8(uVar1,-(int)*(short *)(puVar7 + 1),*(undefined2 *)(puVar7 + 3),
                             (int)*(short *)(puVar7 + 2),(int)*(short *)((int)puVar7 + 10),0,*puVar7
                             ,iVar5);
              }
              FUN_002fb074(uVar1,*(undefined4 *)(param_1[5] + iVar4 * 4));
              FUN_002de76c(uVar1,DAT_004c0850,param_1[6] + iVar4 * 4);
              FUN_0030e604(100000,0);
              iVar4 = iVar4 + 1;
            } while (iVar4 < param_1[4]);
          }
        }
      }
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return;
}
