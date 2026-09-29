// OoT3D decomp @ 00452914  name=FUN_00452914  size=524

void FUN_00452914(int param_1)

{
  ushort uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined1 auStack_60 [48];
  uint local_30;
  int local_2c;
  int *local_28;

  if (*(char *)(param_1 + 0x14) != '\0') {
    iVar9 = 0;
    local_28 = *(int **)(*(int *)(*(int *)(param_1 + 4) + 4) + 0xc);
    local_2c = 0;
    if (0 < *(int *)(*local_28 + 8)) {
      do {
        piVar2 = (int *)(local_28[4] + local_2c * 0xc);
        iVar7 = (uint)*(ushort *)(((int *)piVar2[1])[1] + *(short *)*piVar2 * 2) + *(int *)piVar2[1]
        ;
        if (*(char *)(*(int *)(param_1 + 0x6c) + (uint)*(byte *)(*piVar2 + 3)) == '\0') {
          iVar9 = iVar9 + (uint)*(ushort *)(iVar7 + 8);
        }
        else {
          *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x5c) + local_2c * 0x18;
          local_30 = (uint)*(ushort *)(iVar7 + 8);
          iVar8 = 0;
          if (local_30 != 0) {
            do {
              uVar1 = *(ushort *)(iVar7 + 0x108 + iVar8 * 2);
              uVar3 = FUN_00313644();
              iVar6 = (uint)*(ushort *)(iVar7 + 0x108 + iVar8 * 2) + iVar7;
              if (*(short *)(iVar6 + 0xc) == 2) {
                local_6c = *(undefined4 *)(iVar7 + 0x18);
                local_68 = *(undefined4 *)(iVar7 + 0x1c);
                local_64 = *(undefined4 *)(iVar7 + 0x20);
                FUN_002dd628(*(undefined4 *)(param_1 + 8),param_1 + 0x90,
                             (int)*(short *)(iVar6 + 0xe),iVar6 + *(short *)(iVar6 + 0x10),&local_6c
                            );
              }
              else {
                local_6c = *(undefined4 *)(iVar7 + 0x18);
                local_68 = *(undefined4 *)(iVar7 + 0x1c);
                local_64 = *(undefined4 *)(iVar7 + 0x20);
                FUN_002dd5d4(*(undefined4 *)(param_1 + 8),param_1 + 0x90,
                             (int)*(short *)(iVar6 + 0xe),iVar6 + *(short *)(iVar6 + 0x10),&local_6c
                            );
              }
              FUN_00372224(auStack_60,uVar3);
              iVar5 = 0;
              if (0 < *(short *)(iVar6 + 0xe)) {
                do {
                  iVar4 = param_1 + iVar5 * 0x30;
                  FUN_0036c174(iVar4 + 0x90,auStack_60,iVar4 + 0x90);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < *(short *)(iVar6 + 0xe));
              }
              iVar6 = iVar9 * 4;
              iVar9 = iVar9 + 1;
              FUN_00466f58(param_1 + 0x60,param_1 + 0x90,*(short *)((uint)uVar1 + iVar7 + 0xe) * 3,
                           *(undefined4 *)(*(int *)(param_1 + 0x70) + iVar6));
              iVar8 = iVar8 + 1;
            } while (iVar8 < (int)local_30);
          }
        }
        local_2c = local_2c + 1;
      } while (local_2c < *(int *)(*local_28 + 8));
    }
  }
  return;
}
