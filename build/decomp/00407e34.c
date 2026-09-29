// OoT3D decomp @ 00407e34  name=FUN_00407e34  size=360

void FUN_00407e34(int param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;

  iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x134);
  if (iVar2 != 0) {
    bVar1 = false;
    iVar2 = *(int *)(iVar2 + 8);
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        iVar6 = 0;
        do {
          puVar5 = (uint *)(iVar7 * 0x30 + iVar6 * 0x18 + *(int *)(param_1 + 0xc));
          if (*(char *)((int)puVar5 + 0x11) != '\0' && *(char *)((int)puVar5 + 0x11) != '\x03') {
            uVar8 = *puVar5;
            uVar3 = FUN_0040e3e8(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x134));
            iVar4 = FUN_00405864(puVar5[1],uVar3);
            bVar10 = iVar4 + uVar8 <= param_2;
            bVar9 = param_2 == iVar4 + uVar8;
            if (!bVar10 || bVar9) {
              bVar10 = param_3 <= *puVar5;
              bVar9 = *puVar5 == param_3;
            }
            if (!bVar10 || bVar9) {
              bVar1 = true;
              break;
            }
          }
          iVar6 = iVar6 + 1;
        } while (iVar6 < 2);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
      if (bVar1) {
        iVar2 = *(int *)(param_1 + 0xc);
        if (*(code **)(iVar2 + 300) != (code *)0x0) {
          (**(code **)(iVar2 + 300))(iVar2,3,*(undefined4 *)(iVar2 + 0x130));
          *(undefined4 *)(*(int *)(param_1 + 0xc) + 300) = 0;
        }
        iVar2 = *(int *)(param_1 + 0xc);
        if (*(int *)(iVar2 + 0x134) != 0) {
          FUN_0030a474();
          FUN_0030a40c(*(undefined4 *)(iVar2 + 0x134));
          *(undefined4 *)(iVar2 + 0x134) = 0;
          *(undefined1 *)(iVar2 + 0xc5) = 0;
          *(undefined1 *)(iVar2 + 0xc6) = 0;
          if (*(code **)(iVar2 + 300) != (code *)0x0) {
            (**(code **)(iVar2 + 300))(iVar2,0,*(undefined4 *)(iVar2 + 0x130));
          }
          if (*(char *)(iVar2 + 199) != '\0') {
            *(undefined1 *)(iVar2 + 199) = 0;
            uVar3 = FUN_0030c758();
            FUN_00308d10(uVar3,iVar2);
            return;
          }
        }
      }
    }
  }
  return;
}
