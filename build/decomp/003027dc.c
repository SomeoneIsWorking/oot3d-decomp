// OoT3D decomp @ 003027dc  name=FUN_003027dc  size=552

void FUN_003027dc(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = DAT_00302a18;
  if (*(char *)(DAT_00302a18 + 0x18) != '\x01') {
    iVar6 = *(int *)(DAT_00302a18 + 0xa0);
    iVar2 = *(int *)(iVar6 + 0x24);
    if (iVar2 < *(int *)(iVar6 + 0x20)) {
      do {
        if (*(int *)(iVar6 + 0x28) + *(int *)(iVar1 + 0x14) <= iVar2) {
          return;
        }
        puVar5 = (undefined *)(*(int *)(iVar6 + 0x18) + iVar2 * 0x1c);
        switch(*puVar5) {
        case 0:
          FUN_0048c438(*(undefined4 *)(puVar5 + 8),*(undefined4 *)(puVar5 + 4),
                       *(undefined4 *)(puVar5 + 0xc));
          break;
        case 1:
          FUN_00493ad8(*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + 8),1,
                       *(uint *)(puVar5 + 0xc) & 1);
          break;
        case 2:
          FUN_0048c488(*(int *)(puVar5 + 4),
                       (*(uint *)(puVar5 + 0xc) & 0x7fffff) + *(int *)(puVar5 + 4),
                       *(undefined4 *)(puVar5 + 8),*(uint *)(puVar5 + 0xc) >> 0xf & 0x300 | 1,
                       *(int *)(puVar5 + 0x10),
                       (*(uint *)(puVar5 + 0x18) & 0x7fffff) + *(int *)(puVar5 + 0x10),
                       *(undefined4 *)(puVar5 + 0x14),*(uint *)(puVar5 + 0x18) >> 0xf & 0x300 | 1);
          break;
        case 3:
          uVar3 = *(uint *)(puVar5 + 0x10);
          uVar7 = *(uint *)(puVar5 + 0xc);
          uVar8 = *(uint *)(puVar5 + 0x14);
          bVar9 = (uVar7 & 0xffff) <= (uVar3 & 0xffff);
          if (bVar9) {
            bVar9 = uVar7 >> 0x10 <= uVar3 >> 0x10;
          }
          uVar4 = (uVar8 << 0x19) >> 0x1f;
          if (!bVar9) {
            uVar4 = uVar4 | 4;
          }
          FUN_0048c44c(*(undefined4 *)(puVar5 + 4),uVar7 & 0xffff,uVar7 >> 0x10,
                       *(undefined4 *)(puVar5 + 8),uVar3 & 0xffff,uVar3 >> 0x10,
                       uVar4 | (uVar8 & 7) << 8 | (uVar8 & 0x38) << 9 | (uVar8 & 0x180) << 0x11 |
                       (uVar8 & 0x200) << 7 | uVar8 >> 9 & 2 | uVar8 >> 6 & 0x20);
          break;
        case 4:
          uVar8 = *(uint *)(puVar5 + 0x10);
          bVar9 = (uVar8 & 0xffff) == 0;
          if (bVar9) {
            bVar9 = (*(uint *)(puVar5 + 0x14) & 0xffff) == 0;
          }
          if (bVar9) {
            uVar3 = 0;
          }
          else {
            uVar3 = 4;
          }
          FUN_0048c4c8(*(undefined4 *)(puVar5 + 4),*(undefined4 *)(puVar5 + 8),
                       *(undefined4 *)(puVar5 + 0xc),uVar8 >> 0x10,uVar8 & 0xffff,
                       *(uint *)(puVar5 + 0x14) >> 0x10,*(uint *)(puVar5 + 0x14) & 0xffff,uVar3 | 8)
          ;
        }
        iVar2 = *(int *)(iVar6 + 0x24) + 1;
        *(int *)(iVar6 + 0x24) = iVar2;
        if (puVar5[2] == '\x01') {
          *(undefined *)(iVar1 + 0x18) = 1;
          return;
        }
      } while (iVar2 < *(int *)(iVar6 + 0x20));
    }
  }
  return;
}

